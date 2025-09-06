#include <iostream>
#include <string>

class Humans {
    public:
        std::string name;
        std::string caste;
        std::string occupation;

        Humans(std::string name, std::string caste, std::string occupation){
            this -> name = name;
            this -> caste = caste;
            this -> occupation = occupation;
        }
        void display_details(){
            std::cout << name << " ";
            std::cout << caste << '\n';
            std::cout << occupation << '\n';
        }
};
int main(void){
    Humans n("Soumya","Chopra","Queen");
    n.display_details();
    return 0;
}