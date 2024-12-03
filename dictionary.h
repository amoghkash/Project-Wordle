#define DICTSIZE    10
#define WORD_SIZE   5

struct Word {
   char* letters;
   char unique[WORD_SIZE];
   int counts[WORD_SIZE];
   char* hint1;
   char* hint2;
} word;  

Word dictionary[DICTSIZE] = {
    {(char*)"frame", {'f','r', 'a', 'm', 'e'}, {1,1,1,1,1}, (char*)"activation ___", (char*)""},
    {(char*)"stack", {'s', 't', 'a', 'c', 'k'}, {1,1,1,1,1}, (char*)"push and pop", (char*)""},
    {(char*)"addiu", {'a','d', 'i', 'u', '!'}, {1,2,1,1,0}, (char*)"unsigned add", (char*)"(in MIPS)"},
    {(char*)"array", {'a', 'r', 'y', '!', '!'}, {2,2,1,0,0}, (char*)"instantiate", (char*)"with brackets"},
    {(char*)"fault", {'f','a', 'u', 'l', 't'}, {1,1,1,1,1}, (char*)"segmentation", (char*)"______"},
    {(char*)"state", {'s','t', 'a', 'e', '!'}, {1,2,1,1,0}, (char*)"Status of", (char*)"system"},
    {(char*)"clock", {'c','l', 'o', 'k', '!'}, {2,1,1,1,0}, (char*)"Periodic", (char*)"Signal"},
    {(char*)"bytes", {'b','y', 't', 'e', 's'}, {1,1,1,1,1}, (char*)"8 bits", (char*)""},
    {(char*)"shift", {'s','h', 'i', 'f', 't'}, {1,1,1,1,1}, (char*)"div/mult", (char*)"by 2"},
    {(char*)"debug", {'d','e', 'b', 'u', 'g'}, {1,1,1,1,1}, (char*)"troubleshoot", (char*)""}
    };
    