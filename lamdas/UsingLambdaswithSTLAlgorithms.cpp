#include <iostream>
#include <algorithm>
using namespace std;
auto printelement=[](int element){
cout<<element<<" ";
};
auto doubleit=[](int element){
    return element*2;
};
int main(){
    int n;
    cout<<"Enter the number of elements you are trying to enter"<<endl;
    cin>>n;
    int array[n];
     cout<<"Enter the elements one after the another"<<endl;
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    cout<<"Unsorted array:"<<endl;
    for_each(array,array+n,printelement);
    cout<<endl;
    int set[n];
    transform(array,array+n,set,doubleit);
     for_each(set,set+n,printelement);
}