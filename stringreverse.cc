#include <iostream>
using namespace std;

int main() {
    string sentence;
    getline(cin, sentence);

    string word = "", result = "";
    for (int i = sentence.size() - 1; i >= 0; i--) {
        if (sentence[i] == ' ') {
            result += word + " ";
            word = "";
        } else {
            word = sentence[i] + word; 
        }
    }
    result += word;

    cout << "Reversed sentence: " << result << endl;
    return 0;
}
