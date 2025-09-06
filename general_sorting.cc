#include <iostream>
#include <algorithm>
#include <functional>

int main(void){
    int n;
    std::cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }
    std::sort(arr,arr+n);
    for (int i = 0; i < n; i++)
    {
        std::cout << arr[i] << " " ;
    }
    std::cout << '\n';
    std::sort(arr,arr+n,std::greater<int>());
    for (int i = 0; i < n; i++)
    {
        std::cout << arr[i] << " ";
    }
    
    return 0;
}