#include <iostream>
using namespace std;
int main(){
    cout<<"enter a number"<<endl;
    int x;
    cin>>x;
    auto mutation=[x]() mutable{
        cout<<"before alter:"<<x<<endl;
        x+=10;
        cout<<"after alter:"<<x<<endl;
    };
    mutation();
    cout<<"x in main scope:"<<x<<endl;
}