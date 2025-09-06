#include <iostream>
#include <vector>

int main(void){
    std::vector <int> arr = {1,1,0,0,1,};
    int n = arr.size();
    int count = 0;
    for(int zero : arr){
        if (zero == 0)
        {
            count++;
        }   
    }
   
   
    int i = 0;
        while (count)
        {
            arr[i++] = 0;
            count--;
        }
    
  while (i < n)
  {
    arr[i++] = 1;
  }
  
    for(int num : arr){
        std::cout << num << '\n';
    }
}