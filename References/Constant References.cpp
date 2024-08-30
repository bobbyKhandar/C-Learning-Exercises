#include <iostream>
using namespace std;
void printValue(const int &variable){
    cout<<variable<<endl;
    //error  under this line 
    /*
    gpt explanation
     // Error below: variable is a const int reference.
    // Modifying a const reference is not allowed.
    */
    //variable++;
};
void printValuenoconst(int &variable){
    cout<<variable<<endl;
    //no error  
    variable++;
};
int main(){
    int x=30;
    const int y=40;
    printValue(x);
    printValue(y);
    printValue(50);//litral gpt:-// Works: 50 is a literal, and const int & can bind to a temporary value
    printValuenoconst(x);
    //error under this line
    //gpt explained why
    // Error below: y is a const int, and int & cannot bind to const int
   // printValuenoconst(y);
    //error under this line
    //gpt explained why
    // // Error below: 50 is a temporary value, and int & cannot bind to temporary
    //printValuenoconst(50);//litral
    


    //future me litral argument = const argument, cannot be typecasted into an non const argument;
    //const to nonconst not possibe , non const to const possible in arguments
}