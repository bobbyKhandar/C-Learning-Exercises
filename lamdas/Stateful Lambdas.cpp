#include <iostream>
using namespace std;
int main(){
    auto oddnumbersStore=[count = 1]()mutable{
        return count+=2;
    };
    for(int i=0;i<5;i++)cout<<oddnumbersStore();

}