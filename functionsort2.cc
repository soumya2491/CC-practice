#include <iostream>
#include <vector>
#include <utility>

void sort_arr(std::vector <int> &arr){
    int left_ptr = 0;
    int right_ptr = arr.size()-1;
    while(left_ptr < right_ptr){
         if (arr[left_ptr] == 1 && arr[right_ptr] == 0)
         {
            std::swap(arr[left_ptr++],arr[right_ptr--]);
         }
         else if (arr[left_ptr]==0)
         {
            left_ptr++;
         }
         else if (arr[right_ptr]==1){
            right_ptr--;
         }
    }
}

int main(void){
    std::vector<int> arr = {1,1,0,0,1,0};
    sort_arr(arr);
    for(int num: arr){
        std::cout << num << " ";
    }
}