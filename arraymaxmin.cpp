#include<iostream>
#include<algorithm>
#include<functional>
void change(int arr[],int n);
int main(){
    int n;
    std::cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        std::cin>>arr[i];
  
    }
     change(arr, n);
}
void change(int arr[],int n){
    std::sort(arr,arr+n,std::greater <int>());
    for(int i=0;i<n;i++){
        std::cout<<arr[i];
    }
}