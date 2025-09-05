#include <iostream>

int main(void){
    int n;
    std::cin >> n;
    int t1 = 0,t2 = 1;
    int next = 0;
    for (int i = 0; i < n; i++)
    {
        std::cout << t1;
        next = t1+t2;
        t1 = t2;
        t2 = next;
    }
    return 0;
}