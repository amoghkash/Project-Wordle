#define DICTSIZE    30
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
    {(char*)"debug", {'d','e', 'b', 'u', 'g'}, {1,1,1,1,1}, (char*)"troubleshoot", (char*)""},
    {(char*)"align", {'a', 'l', 'i', 'g', 'n'}, {1,1,1,1,1}, (char*)"memory boundary", (char*)""},
    {(char*)"float", {'f', 'l', 'o', 'a', 't'}, {1,1,1,1,1}, (char*)"data type", (char*)"decimals"},
    {(char*)"break", {'b', 'r', 'e', 'a', 'k'}, {1,1,1,1,1}, (char*)"loop", (char*)"exit"},
    {(char*)"store", {'s', 't', 'o', 'r', 'e'}, {1,1,1,1,1}, (char*)"save in", (char*)"memory"},
    {(char*)"input", {'i', 'n', 'p', 'u', 't'}, {1,1,1,1,1}, (char*)"user", (char*)"data"},
    {(char*)"logic", {'l', 'o', 'g', 'i', 'c'}, {1,1,1,1,1}, (char*)"AND, OR,", (char*)"NOT"},
    {(char*)"count", {'c', 'o', 'u', 'n', 't'}, {1,1,1,1,1}, (char*)"total", (char*)"number"},
    {(char*)"parse", {'p', 'a', 'r', 's', 'e'}, {1,1,1,1,1}, (char*)"analyze", (char*)"syntax"},
    {(char*)"timer", {'t', 'i', 'm', 'e', 'r'}, {1,1,1,1,1}, (char*)"countdown", (char*)"clock"},
    {(char*)"trace", {'t', 'r', 'a', 'c', 'e'}, {1,1,1,1,1}, (char*)"execution", (char*)"path"},
    {(char*)"cache", {'c', 'a', 'h', 'e', '!'}, {2,1,1,1,0}, (char*)"memory", (char*)"store"},
    {(char*)"cycle", {'c', 'y', 'l', 'e', '!'}, {2,1,1,1,0}, (char*)"execution", (char*)"loop"},
    {(char*)"queue", {'q', 'u', 'e', '!', '!'}, {1,2,2,0,0}, (char*)"FIFO", (char*)"data structure"},
    {(char*)"linux", {'l', 'i', 'n', 'u', 'x'}, {1,1,1,1,1}, (char*)"open-source", (char*)"OS"},
    {(char*)"ascii", {'a', 's', 'c', 'i', '!'}, {1,1,1,2,0}, (char*)"character", (char*)"encoding"},
    {(char*)"intel", {'i', 'n', 't', 'e', 'l'}, {2,1,1,1,1}, (char*)"processor", (char*)"manufacturer"},
    {(char*)"query", {'q', 'u', 'e', 'r', 'y'}, {1,1,1,1,1}, (char*)"database", (char*)"request"},
    {(char*)"reset", {'r', 'e', 's', 't', '!'}, {1,2,1,1,0}, (char*)"initialize", (char*)"state"},
    {(char*)"enums", {'e', 'n', 'u', 'm', 's'}, {1,1,1,1,1}, (char*)"defined", (char*)"constants"},
    {(char*)"leaks", {'l', 'e', 'a', 'k', 's'}, {1,1,1,1,1}, (char*)"memory", (char*)"problem"},
    };
    