#include <iostream>
#include <vector>
#include <utility>

void sort_arr(std::vector<int>& arr);

int main(void){
    std::vector<int> arr = {1,2,3,24,10,20,6};
    sort_arr(arr);
    for(int nums:arr){
        std::cout << nums << " ";
    }
    return 0;
}


void sort_arr(std::vector<int>& arr){
    int left_ptr = 0;
    int right_ptr = arr.size()-1;
    while (left_ptr < right_ptr)
    {
        if (arr[left_ptr]%2==0 && arr[right_ptr]%2 != 0)
        {
            left_ptr++;
            right_ptr--;
        }
        else if(arr[left_ptr]%2!=0){
            std::swap(arr[left_ptr++],arr[right_ptr--]);
        }
        else if(arr[right_ptr]%2==0){
            std::swap(arr[right_ptr--],arr[left_ptr++]);
        }
    }
}    