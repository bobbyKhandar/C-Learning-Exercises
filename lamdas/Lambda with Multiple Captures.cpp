#include <iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"enter two numbers"<<endl;
    cin>>x>>y;
    auto opreations=[x,&y]()mutable{
        cout<<"x without mutation"<<x<<endl;
        cout<<"y without mutation"<<y<<endl;
        x++;
        y++;
        cout<<"x with mutation"<<x<<endl;
        cout<<"y with mutation"<<y<<endl;        
    };
    opreations();
        cout<<"x outside function"<<x<<endl;
        cout<<"y outside function"<<y<<endl;     
}