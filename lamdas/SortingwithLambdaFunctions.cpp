#include <iostream>
#include <algorithm>
using namespace std;

auto sortDigits=[](int array[],int size){
    sort(array,array+size);
};

int main(){
    int n;
    cout<<"Enter the number of elements you are trying to enter"<<endl;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    cout<<"Unsorted array:"<<endl;
    for(int i=0;i<n;i++){
        cout<<" "<<array[i];
    }
    
    sortDigits(array,n);
     cout<<"\nSorted array:"<<endl;
    for(int i=0;i<n;i++){
        cout<<" "<<array[i];
    }
}