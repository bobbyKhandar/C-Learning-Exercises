#include <iostream>
using namespace std;

auto opreations=[](int x,int y,char c){
    if(c=='+'){
        return x+y;
    }else{
        return x-y;
    }
};
int main(){
    cout<<"enter an number"<<endl;
    int x,y;
    char c;
    cin>>x;
    cout<<"enter the second number"<<endl;
    cin>>y;
    cout<<"enter the opreation(+ or -)"<<endl;
    cin>>c;
    if(c=='+'||c=='-'){
        cout<<opreations(x,y,c);
    }else{
        cout<<"please enter valid operation"<<endl;
    }
}