#include <iostream>
using namespace std;

int main(){
    int a=10;
    int b=40;
    int* ptra=&a;
    //using &a because it will show the actual location of var a as if done like this int* ptra=a  it just creates an litral which holds value of a and then allocate it to the ptra which creates error
    int*& refrenceToPointer = ptra;
    //sligtly confusing but basically refrence pointer is an refrence which points to the location of where ptra is sotred which points to where a is stored;
    cout<<refrenceToPointer<<endl;
    //gpt :-*refrenceToPointer dereferences the pointer. Since refrenceToPointer is a reference to ptra, and ptra points to a, *refrenceToPointer dereferences to a. Thus, *refrenceToPointer yields the value of a, which is 10.
    cout<<*refrenceToPointer<<endl;
    refrenceToPointer=&b;
    cout<<*refrenceToPointer<<endl;

}