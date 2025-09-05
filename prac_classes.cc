#include <iostream>
class Book{
    private:
    std::string title;
    std::string author;
    public:
    Book(std::string s, std::string a){
         title = s;
         author = a;
    }
    void display(){
        std::cout << title << '\n';
        std::cout << author;
    }
};
int main(){
    std::string a;
    std::string s;
    std::getline(std::cin,a);
    std::getline(std::cin,s);
    Book b(a,s);
    b.display();
    return 0;

}