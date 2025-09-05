#include<iostream>
int change(int &a);
int main(){
    int a=4;
    int *ptr=&a;
    // std::cout<<ptr<<'\n';
    // std::cout<<*ptr;
    std::cout<<change(a)<<'\n';
    std::cout <<a;
}
int change(int &a){
    a+=10;
    return a;
}