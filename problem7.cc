#include <iostream>
#include <vector>

int sum_subarr(std::vector <int> v,int r, int k);
int sum_subarr(std::vector<int> v,int r, int k){
    // std::vector <int> prefix_sum;
    int n = v.size();
    for (int i = 1; i < n; i++)
    {
        v[i]+=v[i-1];
    }
    if (r==0)
    {
        return v[k];
    }
    else
    return v[k]-v[r-1];
}
int main(void){
    int q;
    std::vector<int> arr = {1,2,3,4,5};
    std::cin >> q;
    for (int i = 0; i < q; i++)
    {
        int r,k;
        std::cin >> r >> k;
       std:: cout << sum_subarr(arr,r,k);
    }
    
    return 0;
}