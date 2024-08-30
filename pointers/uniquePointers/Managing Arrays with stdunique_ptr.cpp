#include <iostream>
#include <memory>
using namespace std;

int main(){
    size_t size=10;
    unique_ptr<int[]>ptr=make_unique<int[]>(size);
    for(int i=0;i<size;i++){
        ptr[i]=i;
    }
    for(int i=0;i<size;i++){
        cout<<ptr[i];
    }
}