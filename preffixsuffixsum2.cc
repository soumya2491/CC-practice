#include <iostream>
#include <vector>
bool equilibrium(std::vector <int> &v);
bool equilibrium(std::vector <int> &v){
    int total_sum = 0;
    int prefix_sum = 0;
    int n = v.size();
    for(int &num: v){
        total_sum+=num;
    }
    for (int i = 0; i < n; i++)
    {
        prefix_sum+=v[i];
        int suffix_sum = total_sum - prefix_sum;
        if (prefix_sum == suffix_sum)
        {
            return true;
        }
        
    }
    return false;
}
int main(void){
    std::vector<int> v = {6,2,4,3,1};
    if (equilibrium(v))
    {
        std::cout << "exist!";
    }else std::cout << "doesn't exist!!";

    return 0;
    
}