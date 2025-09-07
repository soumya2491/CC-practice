#include <iostream>
int main(){
    int n;
    std::cin >> n;
    int prime = 1;
    for (int i = 2; i < n; i++){
       if (n%i==0)
       {
       prime = 0;
       }
       break;
    }
    if(prime){
        std::cout << "The number is prime";
    }
    else std::cout << "not prime";
}