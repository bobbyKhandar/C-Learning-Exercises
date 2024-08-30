#include <iostream>
using namespace std;
int main(){
    cout<<"enter an variable"<<endl;
    int x;
    cin>>x;
    cout<<"original variabe without change:"<<x<<endl;
    int& y=x;
    y++;
    cout<<"variabe with change:"<<x<<endl;

}