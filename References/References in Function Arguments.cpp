#include <iostream>
using namespace std;
    void printNumber(int &number){
        cout<<number;
        number++;
    }
int main(){
    int increment=0;
    while(increment!=10){
        printNumber(increment);
    }
    
}