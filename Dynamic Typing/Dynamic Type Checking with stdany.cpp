#include <iostream>
#include <any>
#include <string>
using namespace std;


int main(){
    any x;
    x=34;
    cout<<any_cast<int>(x)<<endl;
    x=string("deez");
    cout<<any_cast<string>(x)<<endl;
}