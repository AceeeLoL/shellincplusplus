#include <iostream>
#include <string>

int main(){
    std::cout << std::unitbuf;
    std::cout << std::unitbuf;
    std::string command;
    
    do
    {
        std::cout << "$ ";
        std::getline(std::cin, command);
        if(command == "exit"){
            return 0;
        }else{
        std::cout << command << ": invalid command" << std::endl;
    }
    }
    while(command!= "exit");
}