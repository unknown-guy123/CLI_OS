#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h> 
#include "commands.h" 

const char* commands_list[] = {
    "--help: List all available commands",
    "--version: Show the version of the program",
    "--exit: Exit the program",
    "--clear: Clear the screen"
};

typedef struct {
    const char* CommmandName;
    void (*FunctionPointer)();
} Command;

Command CommandTable[] = {
    {"--help", HELP},
    {"--version", VERSION},
    {"--exit", EXIT},
    {"--clear", CLEAR}
};

int CommandCount = sizeof(CommandTable)/sizeof(Command);

void HELP(){
    for(int i=0;i<4;i++){
        printf("%s\n",commands_list[i]);
    }
}

void VERSION(){
    printf("Version: %f\n", _VERSION);
}

void EXIT(){
    printf("Closing...");
    exit(0);
}

void CLEAR(){
    system("cls");
}

void initialize_commands(char* command){
    while (command!=NULL){
        printf(">> ");
        scanf("%s", command);
        for(int i=0;i<CommandCount; ++i){
            if(strcmp(command,CommandTable[i].CommmandName)==0){
                CommandTable[i].FunctionPointer();
                break;
            } else{
                printf("unknown command: %s", command); //bug there but I'll fix it next time. the bug is the message unknown command: %s is printing itself twice and causing clutter on the display.
            }
        }
    }
}