#include <iostream>
#include <algorithm>
#include <functional>

int main(void){
    std::vector <int> arr;
    int x;
    do
    {   
        std::cout << "Enter -1 to stop: ";
        std::cin >> x;
        if (x!=-1)
        {
            arr.push_back(x);
        }
        
    } while (x != -1);
    std::sort(arr.begin(),arr.end(),std::greater<int>());
    int s = arr.size();
    for (int i = 0; i < s; i++)
    {
        std::cout << arr[i] << '\n';
    }
    for(int s: arr){
        std::cout << '\n' << s << '\n';
    }
   return 0;
}