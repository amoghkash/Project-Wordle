//=================================================================
// The main program file.
//
// Copyright 2024 Georgia Tech.  All rights reserved.
// The materials provided by the instructor in this course are for
// the use of the students currently enrolled in the course.
// Copyrighted course materials may not be further disseminated.
// This file must not be made publicly available anywhere.
//==================================================================

// External libs
#include <stdlib.h>

// Project includes
#include "globals.h"
#include "hardware.h"
#include "graphics.h"
#include "keyboard.h"
#include "speech.h"

#define REFRESH_TIME    130

Timer t2;

DigitalOut myled1(LED1);
DigitalOut myled2(LED2);
DigitalOut myled3(LED3);
DigitalOut myled4(LED4);

void set_random_seed(Timer);
void resetGame();
/*
* This function handles the main logic of the game. You should
* initialize the hardware in this function, make calls to 
* functions that update the keyboard and your guess of 
* the word. 
*/
int main()
{
    GameInputs inputs; 
    printf("Initializing Hardware\n");
    // First things first: initialize hardware
    ASSERT_P(hardware_init() == ERROR_NONE, -1);
    printf("Program Starting\n");
    //led1 hardware initialization
    myled1=1;  
    
    // Timer to measure game update speed (secondarily used to generate random seed)
    Timer t;
    
    int dt; // delta time
    
    /* Put code here to initialize the game state:
    1) you will need to use a psuedo random number generator such as
        rand() to randomly select a goal word from the dictionary.
        The random function needs to be seeded before you call rand(),
        otherwise, rand() will always generate the same series of numbers.
        Call the function set_random_seed -- you need to complete its
        definition below.*/
    set_random_seed(t);
    /*
    2) call init_keyboard() and show start screen

    // Setup Game 
    
    3) initialize any other game state that you add.
    */
    init_keyboard();
    gameInPlay = true;
    gameInfo[3]++;
    t2.start();
    while(gameInPlay)
    {
        t.reset();
        t.start();
        myled2 =!myled2; //blink led2 to show game progress

        /*
        CORE GAME LOOP
        1) Call draw_lower_status() 
            - will draw a line to separate the keyboard from the guesses
        2) Read user inputs
            - will read the user buttons / navswitch input
            - The output of this function should be stored in the variable 'inputs' 
        3) Update game based on user inputs
            a) if navswitch left, call moveleft() (Feature 1)
            b) if navswitch right, call moveright() (Feature 1)
                - will make the next available letter in the keyboard appear in the bottom of the screen
            c) if navswitch pressed, call select_letter() (Feature 2)
                - will handle letter selection and cases where a guess is completed
                - this is the bulk of P2-2
            d) if button2 pressed, call remove_letter() (Feature 3)
                - will handle letter removal and return to main loop
        */
        draw_lower_status();    // Draw Line on Bottom

        inputs = read_inputs();
        if (inputs.left) {
            moveleft();
        } else if (inputs.right) {
            moveright();
        } else if (inputs.up) {
            moveup();
        } else if (inputs.down) {
            movedown();
        } else if (inputs.center) {
            select_letter();
        } else if (inputs.b1) {
            remove_letter();
        } else if (inputs.b3) { // Reroll word
            uLCD.cls();
            draw_sprite();
            init_keyboard();
            gameInfo[3]++;
            t2.reset();
        }
        
        // Compute update time
        t.stop();
        dt = t.read_ms();
        gameInfo[5] = t2.read_ms()/1000;
        //printf("Time is %d\n", dt);
        if (dt < REFRESH_TIME) wait_us((REFRESH_TIME - dt)*1000);
    }
    return 0;
}


// Set timer, display start screen
void set_random_seed(Timer t) {
    GameInputs inputs; 
    t.start();
    char* startMessage = (char*) "Push any button to start.\n";
    uLCD.printf("%s", startMessage);
    drawWordleLogo();
    drawWordleText();
    while(1){
      inputs = read_inputs();
      if (inputs.b1 || inputs.b2 || inputs.b3) break;
      }
    wait_us(200000);
    uLCD.cls();
    draw_sprite();
    t.stop();
    int seed = t.read_ms();    
    srand(seed);
}

void newRound() {
    uLCD.cls();
    init_keyboard();
    draw_lower_status();
    draw_sprite();
}