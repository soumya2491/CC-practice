#include <iostream>
#include <cmath>
#include <algorithm>
#include <functional>
int main(void){
    int arr[] = {24,10,2006};
    std::sort(arr,arr+3,std::greater<int>());
    for (int i = 0; i < 3; i++)
    {
        std::cout << arr[i] << '\n';
    }   
    
    return 0;
}