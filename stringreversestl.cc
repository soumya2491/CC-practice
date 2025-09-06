#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include  <algorithm>

int main(void){
    std::string name;
    std::getline(std::cin , name);
    std::stringstream ss(name);
    std::string s;
    std::vector<std::string> so;
    while (ss >> s) {
        so.push_back(s);
    }
    std::reverse(so.begin(), so.end());
    for (auto word : so) {
        std::cout << word << " ";
    }
    std::cout << std::endl;
   
}