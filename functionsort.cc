#include <iostream>
#include <vector>
#include <utility>

std::vector<int> sort_arr(std::vector<int>& arr){
    int zeropos = 0;
    for(int &num : arr){
        if (num == 0)
        {
            std::swap(arr[zeropos++],num);
        }
        
    }
    return arr;
}
int main(void){
    std::vector<int> arr = {1,1,1,0,0,0,0,1,1,0,1};
    sort_arr(arr);
    for(int num : arr){
        std::cout << num;
    }
    return 0;
}