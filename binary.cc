#include <iostream>

int main(void){
    int n;
    int decimal = 0, base = 1, rem ;
    std::cin >> n;
    while (n>0)
    {
        rem = n%10;
        decimal+=rem*base;
        n/=10;
        base*=2;
    }
    std::cout << decimal;
    return 0;
}