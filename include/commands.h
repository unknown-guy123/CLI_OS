#ifndef COMMANDS_H
#define COMMANDS_H

#define _VERSION 1.000008 // Version of the program

//will be print when help command is called.
extern const char* commands_list[];
// Function prototype
void HELP();
void VERSION();
void EXIT();
void CLEAR();

// Function to execute system commands
void initialize_commands(char* command);

#endif  // HEADER_H
