#include <iostream>
#include <utility>
int main(void){
    int arr[5] = { 1,0,0,0,1};
    int left = 0;
    int right = 4;
    while (left<right)
    {
        if (arr[left]==1 &&arr[right] == 0)
        {
            std::swap(arr[left],arr[right]);
            left++;
            right--;
        }
        else if(arr[left] == 0){
            left++;
        }
        else if (arr[right]==1){
            right--;
        }
    }
    for (int i = 0; i < 5; i++)
    {
        std::cout << arr[i] << '\n';
    }
    
    
}