#include<iostream>
using namespace std;
class students{
    private:
    string name;
    int age ;
    public: students(string name,int age){
        this->name =name;this ->age =age;}
        friend void show_info(students s1);

    };
    void show_info(students s1){
        cout<<"Name= "<<s1.name<<endl<<"age="<<s1.age<<endl;
    }
    int main(){
        students s1("superman",100);
         show_info(s1);
         return 0;
    }
