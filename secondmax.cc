#include <iostream>
#include <vector>

int main(void){
    std::vector <int> arr = {24,10,95,9,5};
    int n = arr.size();
    int max = arr[0];
    int secondmax = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
        if (secondmax < arr[i] && arr[i] !=max)
        {
            secondmax = arr[i];
        }
    }
    std::cout << max << '\n';
    std::cout << secondmax;
    
}