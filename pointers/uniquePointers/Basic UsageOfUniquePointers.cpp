#include <iostream>
#include <memory>
using namespace std;
int main(){
    cout<<"Enter your number";
    int x;
    cin>>x;
    unique_ptr<int> ptr=make_unique<int>(x);
    cout<<"Value or ptr is:"<<*ptr<<endl;

    *ptr=23;
    cout<<"Value of modified ptr is"<<*ptr<<endl;
    unique_ptr<int> ptr2=move(ptr);
    cout<<"Value of the moved ptr is"<<*ptr2<<endl;
    //undefined behivaior(Changed ownership) 
    cout<<"Value of the original ptr is"<<*ptr<<endl;
}