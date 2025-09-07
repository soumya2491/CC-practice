#include <iostream>
#include <vector>

int main(void){
    std::vector<std::vector<int>> arr1(3,std::vector<int>(3));
    std::vector<std::vector<int>> arr2(3,std::vector<int>(3));
    std::vector<std::vector<int>> arr3(3,std::vector<int>(3));
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            std::cin >> arr1[i][j];
        }
        
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            std::cin >> arr2[i][j];
        }
        
    }
    
}