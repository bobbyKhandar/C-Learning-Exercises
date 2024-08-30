#include <iostream> 
#include <variant>
using namespace std;

int main(){
    variant<int,bool,char> v;
    v=11;
    if(holds_alternative<int>(v)){
        cout<<"v= "<<get<int>(v)<<endl;
    }  v=true;
    if(holds_alternative<bool>(v)){
        cout<<"v= "<<get<bool>(v)<<endl;
    }  v='x';
    if(holds_alternative<char>(v)){
        cout<<"v= "<<get<char>(v)<<endl;
    }
}