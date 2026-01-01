#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <filesystem>

std::vector<std::string> tokenize(const std::string& line){ 
    std::istringstream iss(line);
    std::vector<std::string> tokens;
    std::string tok;
    while (iss >> tok) {
        tokens.push_back(tok);
    }
    return tokens;
}

int main(){
    std::cout << std::unitbuf;
    std::cerr << std::unitbuf;
    
    
    for(std::string line; std::cout << "$ ", std::getline(std::cin, line); ){
        auto tokens = tokenize(line);
        if (tokens.empty()) {
            continue;
        }
        
        const std::string& cmd = tokens[0];

        if(cmd == "exit"){
            return 0;
        } else if(cmd  == "echo") {
            for(size_t i = 1; i < tokens.size(); ++i) {
                if (i > 1) {
                    std::cout << ' ';
                }
                std::cout << tokens[i];
            }
            std::cout << std::endl;
        } else {
            std::cout << cmd << ": invalid command" << std::endl;
        }
    }
}