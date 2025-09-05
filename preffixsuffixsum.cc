#include <iostream>
#include <vector>

std::vector<int> sum_prefix(std::vector<int> v);
std::vector<int> sum_suffix(std::vector<int> v);

int main(void){
    std::vector<int> v = {1,2,3,5,24,10,9};
    int n = v.size();
   std::vector<int> v1 = sum_prefix(v);
   std::vector<int> v2 = sum_suffix(v);
   bool found = false;
    for (int i = 0; i < n; i++)
    {
        if (v1[i]==v2[i])
        {
            found = true;
            break;
        }
        
    }
    if (found)
    {
        std::cout << "exist!";
    }
    else std::cout << "doesn't exist!";
}
std::vector<int> sum_prefix(std::vector<int> v){
    int n = v.size();
    for (int i = 1; i < n; i++)
    {
        v[i]+=v[i-1];
    }
    return v;
}
std::vector<int> sum_suffix(std::vector<int> v){
    int n = v.size();
    for (int i = n-2; i >=0 ; i--)
    {
        v[i]+=v[i+1];
    }
    return v;
}