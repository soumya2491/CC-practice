#include <iostream>
#include <vector>

int main(void){
    std::vector<int> arr;
    int n;
   do
   {
    std::cin >> n;
    if(n!=-1){
        arr.push_back(n);
    }
   } while (n!=-1);
}