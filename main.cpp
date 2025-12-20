#include <iostream>
#include <string>

int main(){
    std::cout << std::unitbuf;
    std::cerr << std::unitbuf;
    std::string command;
    
    do
    {
        std::cout << "$ ";
        std::getline(std::cin, command);
        if(command == "exit"){
            return 0;
        }
        else if(command.substr(0, 4) == "echo"){
            if(command.length() > 5){
                std::cout << command.substr(5) << std::endl;
            }
            else{
                std::cout << std::endl;
            }
        }
        else{
        std::cout << command << ": invalid command" << std::endl;
        }
}
    while(command!= "exit");
}