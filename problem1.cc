#include <iostream>

void hello(std::string name);
int main(){
    std::string name;
    std::cin >> name;
    hello(name);
}
void hello(std::string name){
    std::cout << "HELLO! " << name ;
}