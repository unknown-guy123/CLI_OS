#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h> 
#include "commands.h" 

const char* commands_list[] = {
    "HELP: List all available commands",
    "VERSION: Show the version of the program",
    "EXIT: Exit the program",
    "CLEAR: Clear the screen"
};

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
    printf(">> ");
    scanf("%s", command);
    command[strcspn(command, "\n")] = 0; // Remove newline character if present
    if (strcmp(command, "HELP") == 0) {
        HELP();
    } else if (strcmp(command, "VERSION") == 0) {
        VERSION();
    } else if (strcmp(command, "EXIT") == 0){
        EXIT();
    } else if(strcmp(command, "CLEAR") == 0){
        CLEAR();
    } else {
        printf("Unknown command: %s\n", command);
    }
}