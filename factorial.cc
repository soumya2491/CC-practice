#include <iostream>

int main(void){
    int n;
    std::cin >> n;
    long long product = 1;
    for (int i = 2; i <= n; i++)
    {
        product*=i;
    }
    std::cout << product;
    
}