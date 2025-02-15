#include "commands.h" // Include the header file

std::string commm[] = {
    "help",
    "clear",
    "exit",
    "version"
}; // Array of commands

void SystemCommands(std::string command){
    std::cout << "Enter a command: " << std::endl;
    std::cin >> command;

    if(command == "help"){
        std::cout << "System Commands:\n" << std::endl;
        for(int i=0; i<5; i++){
            std::cout << commm[i] << std::endl;
        }
    } else if(command == "clear"){
        system("cls");
    } else if(command == "exit"){
        std::cout << "Closing..." << std::endl;
        exit(0);
    } else if(command == "version"){
        std::cout << _VERSION << std::endl;
    } else {
        std::cout << " '" << command << "' " << ":is not an internal of extrenal command." <<std::endl;
    }
};
