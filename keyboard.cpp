#include "keyboard.h"
#include "PeripheralNames.h"
#include "dictionary.h"
#include "doubly_linked_list.h"
#include "globals.h"
#include "speech.h"
#include <cctype>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>


#define STARTING_ROW_NUM    5

DLinkedList* keyboard;
LLNode* curr;

char currTest;

Word goal_word_info;
char* goal_word;
char correct[WORD_SIZE];
int correct_num;

char incorrect[21];
int incorrect_num;

char guess[WORD_SIZE];
int idx_2 = 0;
int row = STARTING_ROW_NUM;
int col = 6;

char* currData;
char currData_upper;
char* prevLetter;
char* nextLetter;

char* hint1;
char* hint2;


/*
* Function to implement comparisons of data in the DLL.
* This function allows the comparisons of chars if you input
* chars into the doubly_linked_list. If you want you can make 
* additional functions to compare different types of data.
*
* This function should be passed into the create_dLinkedList()
* call.
*
*/
int compareChar(void* input1, void* input2){
    if(*(char*)input1 == *(char*)input2){
        return 1;
    }
    else{
        return 0;
    }
}

void init_keyboard()
{
    idx_2 = 0;
    row = STARTING_ROW_NUM;
    printf("Initializing Keyboard\n"); // DebugS
    // Select random word from dictionary
    int random_word_ind = rand() % DICTSIZE; // change with size of dictionary
    goal_word_info = dictionary[random_word_ind];

    goal_word = goal_word_info.letters;
    hint1 = goal_word_info.hint1;
    hint2 = goal_word_info.hint2;
    printf("Goal word is %s\n\r", goal_word);

    // Instantiate alphabet keyboard
    keyboard = create_dlinkedlist();
    char initial_char = 'a';


    /*
    YOUR CODE HERE
    Populate the 'keyboard' linked list with the rest of the letters of the alphabet (b-z)
     */
    for(int i = 0; i < 26; i++) {   // Do ASCII math and add b-z into linked list
        char* newchar = (char*) malloc(sizeof(char));
        *newchar = initial_char + i;
        //printf("Inserting %c\n", *newchar); // DEBUGCODE
        insertTail(keyboard, (void*)newchar);
    }
    
    curr = getHead(keyboard);
    currData = (char*) getData(curr);
    update_letter();
}

void moveleft()
{
    /*
    YOUR CODE HERE (Feature 1)
    1) Update the global 'curr' to the left (previous letter) and display
    */
    if (curr == getHead(keyboard)) {
        curr = getTail(keyboard);
    } else {
        curr = getPrev(curr);
    }

    currData = (char*) getData(curr);
    update_letter();
    wait_us(100000);
}

void moveright()
{
    /*
    YOUR CODE HERE (Feature 1)
    1) Update the global 'curr' to the right (next letter) and display
    */
    if (curr == getTail(keyboard)) {
        curr = getHead(keyboard);
    } else {
        curr = getNext(curr);
    }

    currData = (char*) getData(curr);
    update_letter();
    wait_us(100000);
}

void moveup() {
    moveright();
    moveright();
    moveright();
}

void movedown() {
    moveleft();
    moveleft();
    moveleft();
}

void select_letter()
{   
    /*
    YOUR CODE HERE (Feature 2)
    1) Update the next letter of your guess with the current 
        letter from the keyboard
        a) use globals guess and idx_2
    2) Display the letter on the uLCD screen in the correct location (Feature 4)
        a) see uLCD.locate() and uLCD.puts()
    3) Increment idx_2
    4) If the guess is completed, call check_word() to check the guess
    */
    guess[idx_2] = *currData;
    
    uLCD.color(0x9e9e9e);
    uLCD.locate(col, row);
    uLCD.puts(guess);

    speaker.period_ms(50);
    speaker.write(1.0);
    
    if(idx_2 == (WORD_SIZE-1)) {
        check_word();
    } else {
        idx_2++;
        printf("Current Guess: %s, idx = %d\n", guess, idx_2);   // DEBUGCODE
    }
    wait_us(100000);
    speaker.write(0);
    return;
}

void remove_letter()
{   
    /*
    YOUR CODE HERE (Feature 3)
    1) Remove the current letter of your guess
    2) Remove the letter from the uLCD screen 
        (this can be done in multiple ways)
    3) Decrement idx_2
        a) Hint: prevent decrement in certain edge case
    */
    
    if(idx_2 == 0) {
        printf("Beginning of Guess\n");
    } else {
        idx_2--;
        guess[idx_2] = ' ';
    
        uLCD.locate(col, row);
        uLCD.puts(guess);
        printf("Current Guess: %s, idx = %d\n", guess, idx_2);   // DEBUGCODE
    }
    wait_us(100000);
}

char right_word[6] = "     "; // Empty "word" 

// Function to check whether a character already exists in a list
bool char_in_list(char c, char* list) {
    // Use a temporary pointer to traverse the list without consuming it
    char* temp = list;

    // Iterate through the list until the null terminator is reached
    while (*temp != '\0') {
        if (*temp == ' ') break;
        if (*temp == c) {
            return true; // Character found in the list
        }
        temp++; // Move to the next character in the list
    }
    return false; // Character not found in the list
}

void resetGameVariables() {
    for(int i = 0; i < (WORD_SIZE+1);i++) {
        guess[i] = ' ';
    }
    for(int i = 0; i < 22;i++) {
        incorrect[i] =' ';
    }

    incorrect_num = 0;
    correct_num = 0;
    row = STARTING_ROW_NUM;
    idx_2 = 0;
}

void displayGameStats() {
    printf("Played: %d, Won: %d, Max: %d", gameInfo[3], gameInfo[4], gameInfo[2]);
    uLCD.cls();
    uLCD.color(0xf7ca02);
    uLCD.locate(2,7);
    uLCD.printf("Game Statistics:");
    uLCD.locate(2,8);
    uLCD.color(0x7036f2);
    uLCD.printf("High Score: %d", gameInfo[2]);
    uLCD.locate(2,9);
    uLCD.color(0xffa763);
    uLCD.printf("Win %%: %d", ((gameInfo[4]*100)/gameInfo[3]));
}

void displayWinningScreen() {
    bool choiceMade = false;
    GameInputs inputs;
    int roundScore = (row-STARTING_ROW_NUM)+1;
    // Display You Win! Screen
    printf("WINNING GUESS\n");
    uLCD.cls();
    uLCD.color(0xf7ca02);
    uLCD.locate(4,7);
    char* win = (char*) "YOU WON!!\n";
    uLCD.puts(win);
    uLCD.color(0x6ca965);
    uLCD.locate(3,9);
    uLCD.printf("Round Score: %d", roundScore);
    //gameInPlay = false;
    uLCD.locate(3,10);
    uLCD.printf("Play Again? Press b1 for yes\n or b2 for no.");
    
    // Calculate Game Statistics
    gameInfo[4]++;
    if (gameInfo[2] > roundScore) {
        gameInfo[2] = roundScore;
    }

    printf("Played: %d, Won: %d\n", gameInfo[3], gameInfo[4]);

    while (!choiceMade) {
        inputs = read_inputs();
        if (inputs.b1) {
            uLCD.cls();
            draw_sprite();
            init_keyboard();
            gameInfo[3]++;
            choiceMade = true;
            resetGameVariables();
        } else if(inputs.b2) {
            gameInPlay = false;
            choiceMade = true;
            displayGameStats();
        }
    }

    return;
}

void displayLosingScreen() {
    // Display You Win! Screen
    bool choiceMade = false;
    GameInputs inputs;
    int roundScore = (row-STARTING_ROW_NUM)+1;
    printf("Lost the game\n");
    uLCD.cls();
    uLCD.color(0xFF0000);
    uLCD.locate(5,7);
    uLCD.puts((char*) "YOU LOST.");
    uLCD.locate(3,8);
    uLCD.puts((char*) "The word was:");
    uLCD.color(0x00FF00);
    uLCD.locate(col,9);
    uLCD.puts(goal_word);
    uLCD.locate(3,10);
    uLCD.printf("Play Again?\nPress b1 for yes\nor b2 for no.");

    
    printf("Played: %d, Won: %d\n", gameInfo[3], gameInfo[4]);

    while (!choiceMade) {
        inputs = read_inputs();
        if (inputs.b1) {
            uLCD.cls();
            draw_sprite();
            init_keyboard();
            gameInfo[3]++;
            choiceMade = true;
            resetGameVariables();
        } else if(inputs.b2) {
            gameInPlay = false;
            choiceMade = true;
            displayGameStats();
        }
    }
    return;
}

void check_word() 
{
    /* YOUR CODE HERE (Feature 5, 6, 7, 8, 9)
    Implement an algorithm to check the word
    1) If a letter is in the word, and in the correct location in the guess
        a) Leave it on the screen in the correct position
        b) Display it at the top of the screen with the other correct letters
        c) Leave it in the keyboard
    2) If a letter is in the word, but in the wrong location in the guess
        a) Remove it from the guess on the screen
        b) Display it at the top of the screen with the other correct letters
        c) Leave it in the keyboard
    3) If a letter is not in the word, but is in the guess
        a) Remove it from the guess on the screen
        b) Remove it from the keyboard
    4) If a guess is fully correct, display the 'You Win!' screen
    5) If the player just submitted their 5th guess and it was incorrect
        call speech() to display the hint
    6) If the player just submitted their 6th guess and it was incorrect
        display the "You Lose :(" screen
    */
    printf("comparing %s and %s, ret=%d\n", goal_word, guess, strcmp(goal_word, guess));

    // Manually Check if the words are equal, if not, set the found flag to false
    bool found = true;
    for(int i = 0; i < WORD_SIZE; i++) {    // Check if words are equal, set found to false if not
        if (guess[i] != goal_word[i]) {
            printf("%c is not equal to %c @ index %d\n", guess[i], goal_word[i], i);
            found = false;
            break;
        }
    }

    if (found) {
        displayWinningScreen();
        return;
    } else if ((row-STARTING_ROW_NUM) == 4) {        // 5th Try
        // Display Hint
        speech(hint1, hint2);
    } else if ((row - STARTING_ROW_NUM) == 5) {     // 6th Try
        displayLosingScreen();
        return;
    }

    for (int i = 0; i < WORD_SIZE; i++) {
        if (char_in_list(guess[i], goal_word)) {  
            if (guess[i] == goal_word[i]) { // If letter is in the word but isnt the right place and doesn't already exist correct list, add it
                uLCD.color(0x09ff09);
                uLCD.locate(col+i, row);
                uLCD.putc(guess[i]);
            } else {
                uLCD.color(0x9e9e9e);
                uLCD.locate(col+i, row);
                uLCD.putc(guess[i]);
            }         // If the character isnt even in goal word, delete it
        } else {    // If character is in the word
            // Remove word from keyboard and remove it from guess
            if (!char_in_list(guess[i], incorrect)) {   // If the character was already deleted, don't try another deletion
                incorrect[incorrect_num] = guess[i];
                incorrect_num++;
                // find the node with the value inside it
                //printf("guess[i] = %c, i = %d, output = %s\n", guess[i], i, char_in_list(guess[i], goal_word) ? "true" : "false"); // DEBUGCODE
                moveleft();
                LLNode* temp = getHead(keyboard);
                while (temp) {
                    char* data = (char*) temp->data;
                    if (*data == guess[i]) {
                        break;
                    }
                    temp = temp->next;
                }
                printf("Deleting %s from keyboard\n", (char*) getData(temp));       // DEBUGCODE
                deleteNode(keyboard, temp); // Delete node
                update_letter();
            }
            // Word
            uLCD.color(0x5c5c5c);
            uLCD.locate(col+i, row);
            uLCD.putc(guess[i]);
        }
    }

    row++;      // Update row
    idx_2=0;    // Update "column"

    for(int i=0; i<(WORD_SIZE+1); i++) {    // Empty the guess
        guess[i] = ' ';
    }

}

void update_letter() {
    

    if (curr == getTail(keyboard)) {
        prevLetter = (char *) getData(getPrev(curr));
        nextLetter = (char *) getData(getHead(keyboard));
    } else if (curr == getHead(keyboard)) {
        prevLetter = (char *) getData(getTail(keyboard));
        nextLetter = (char *) getData(getNext(curr));
    } else {
        prevLetter = (char *) getData(getPrev(curr));
        nextLetter = (char *) getData(getNext(curr));
    }

    //printf("Letters: %s, %s, %s\n", prevLetter, currData, nextLetter); // DEBUGCODE
    currData = (char*) getData(curr);
    currData_upper = (char) toupper(*currData);
    uLCD.color(0xffffff);
    uLCD.locate(7,15);
    uLCD.puts(prevLetter);
    uLCD.color(0xfa4441);
    uLCD.locate(8,15);
    uLCD.puts(&currData_upper);
    uLCD.color(0xffffff);
    uLCD.locate(9,15);
    uLCD.puts(nextLetter);
    
}