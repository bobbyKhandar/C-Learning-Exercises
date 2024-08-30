#include <iostream>
using namespace std;
class point{
    private:
    int x=0,y=0;
    public:
    void move(int xincrement,int yincrement){
        x+=xincrement;
        y+=yincrement;
    }
    void printMoves(){
        cout<<"x:"<<x<<" y:"<<y<<endl;
    }
};
int main(){
    point p;
    p.move(2,5);
    p.printMoves();
}