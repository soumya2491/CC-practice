#include <iostream>
#include <string>

int main(void){
    using std::cout,std::string,std::cin;
    string name;
    string s;
    int n;
    cin >> n;
    cout << "Enter the string: ";
    std::getline(cin >> std::ws, name);
    name.append("24");
    name.insert(6,"a");
    string nick = name.substr(0,6);
   char alpha = name.at(6);
    cout << "hello " <<  name << '\t' << nick << std::endl;
    cout << alpha << '\n';
    s = std::to_string(n);
    s.append(1,'4');
    cout << s << std::endl;
    return 0;
}