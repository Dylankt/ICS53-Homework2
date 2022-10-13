#include <stdio.h> 
#include <string.h> 
#include <unistd.h> 
#include <sys/stat.h> 
#include <sys/types.h>
#include <sys/wait.h>
#include <ctype.h> 
#include <signal.h> 
#include <fcntl.h> 

struct Command {
    char commandName[80];
    char *args[40];
    int count;
};

int main() {
    int isParsed = 0;
    int wasRun = 0;
    int exit = 1;
    Command userInput;
    int args[40];
    printf("\n* * * * * * * * * * * * * * * *\n");
    printf("* * * Dylan and Sa's Shell * * *\n");
    printf("* * Please Use With Caution * *\n");
    printf("* * * * * * * * * * * * * * * *\n\n");
    while (1) {
        char *initialInput[80];
        printf("prompt > ");
        fgets(initialInput, 80, stdin);
        isParsed = parseUserInput(&input, initialInput);
    }
}

int parseUserInput(Command *userInput, char *initialInput){
    
}

int runCommand(){

}
