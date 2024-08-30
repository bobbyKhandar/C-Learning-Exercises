#include <iostream>
using namespace std;

void start(){
    int x;
    cout<<"enter your income";
    cin>>x;
    int tax=30;
    auto taxIncome=[tax](int x){
        return x-((x/100)*tax);
    };
    cout<<"your income after tax is:"<<taxIncome(x);

}
int main(){
    start();
}