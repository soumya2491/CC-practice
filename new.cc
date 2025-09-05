#include <iostream>
#include <string>
int main(void){

    // int x;
    // while (std::cin >> x) {  // Reads number, loop ends if input fails
    //     std::cout << "You entered: " << x << '\n';
    // }
    // std::string word;
    // while (std::cin >> word) {  // Reads word by word, stops on EOF
    //     std::cout << "Word: " << word << '\n';
    // }
    bool s;
    while (std::cin >> s)
    {
        std::cout << "you entered: " << s << '\n';
    }
    return 0;
}

