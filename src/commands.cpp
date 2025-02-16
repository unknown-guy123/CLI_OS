#include "commands.h" // Include the header file

std::string commm[] = {
    "help",
    "clear",
    "exit",
    "version",
    "create_file",
    "read_file"
}; // Array of commands

std::string FileName[] = {}; // Array of file names
std::string line, filename;

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
    } else if(command == "create_file"){
        std::cout << "Enter the file name: " << std::endl;
        std::cin >> filename;
        std::ifstream filecreate(filename + ".txt");
        std::cout << "File Created successfully." << std::endl;
        
        std::ofstream filewrite(filename + ".txt");
        // filewrite.open(filename + ".txt");
        std::cout << "\nEnter data " << filename << ".txt" << std::endl;
        std::cin.ignore();
        std::getline(std::cin, line);
        filewrite << line;
        filewrite.close();
        std::cout << "Data written successfully." << std::endl;
    } else if(command == "read_file"){
        std::cout << "Enter the file name: " << std::endl;
        std::cin >> filename;
        std::ifstream fileread(filename + ".txt");
        std::cout << "Reading file..." << std::endl;
        std::cout << "file data: " << std::endl;
        while(std::getline(fileread, line)){
            std::cout << line << std::endl;
        }
        fileread.close();
    } else {
        std::cout << " '" << command << "' " << ":is not an internal of extrenal command." <<std::endl;
    }
    // File System
};
