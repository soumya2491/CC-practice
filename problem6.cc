#include <iostream>
#include <vector>

int main(void){
    std::vector <int> arr = {1,2,3,4,5};
    int q;
    std::cin >> q;
    for (int i = 0; i < q; i++)
    {
        int x;
        std::cin >> x;
        for (int i = 0; i < 5; i++)
        {
            if (arr[i] == x)
            {
                std::cout << "Element found at index : " << i << '\n';
            }
            
        }
        
    }
    return 0;
}