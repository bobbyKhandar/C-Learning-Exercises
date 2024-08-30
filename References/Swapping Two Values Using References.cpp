#include <iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the first number"<<endl;
    cin>>a;
    cout<<"Enter the second number"<<endl;
    cin>>b;
    cout<<"a before modifications"<<a<<endl;
    cout<<"b before modifications"<<b<<endl;
    auto swap=[&a,&b](){
        int temp=a;
        a=b;
        b=temp;
    };
    swap();
    cout<<"a after modifications"<<a<<endl;
    cout<<"b after modifications"<<b<<endl;
}