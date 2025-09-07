#include <iostream>
void sum(int x , int y, int z);
int main() {
    int a,b,c;
    std::cin >>a >> b >>c;
    int a = sum(a,b,c);
}
void sum(int x , int y, int z){
    std::cout <<  x+y+z;
}