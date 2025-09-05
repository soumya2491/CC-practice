#include <iostream>
#include <time.h>
#include <cstdlib>  

int main(void){
    int num;
    std::cin >> num;
    srand(time(NULL));
    int random_num = (rand() % 100) + 1;
    std::cout << "The random number is : " << random_num << '\n';
    if (num > random_num)   
    {
        std::cout << "You Won! \n";
    }
    else if (num < random_num)
    {
        std::cout << "Better luck Next time... \n";
    }
    else{
        std::cout << "Tied!! \n";
    }
    
}