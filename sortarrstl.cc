#include <iostream>
#include <vector>
#include <utility>

int main(void){
    std::vector<int> v = {1,1,1,0,0,1,0,0};
    int zeropos = 0;
    for(int &num : v){
        if (num == 0)
        {
            std::swap(v[zeropos++],num);
        }
        
    }
    for(int num : v){
        std::cout << num ;
    }
}