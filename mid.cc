#include <iostream>
#include<string>
#include <vector>
#include <sstream>


int main(void){
    std::string line;
    std::getline(std::cin,line);
    std::string tag_name = line.substr(1,line.length()-2);
    std::stringstream s(tag_name);
    std::string word;
    while(s >> word){
        std::cout << word << '\n';
    }
    std::cout << tag_name;
}