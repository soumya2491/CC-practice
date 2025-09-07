#include <iostream>
#include <vector>
// #include <bits/stdc++.h>

int main (void){
    int n;
    std::cin >> n;
    while (n!=0)
    {
        int count = 0;
        int temp = n;
        while (temp != 0) {
            temp /= 10;
            count++;
        }
        std::cout << "Number of digits: " << count << std::endl;
    }
    return 0;
}