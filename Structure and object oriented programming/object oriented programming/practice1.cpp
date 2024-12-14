#include<iostream>
using namespace std;
class myclass{
    int a,b;
public:
    myclass(int x, int y):a(x),b(y){};
    friend void add(myclass ob);

};
void add(myclass ob){
    cout<<ob.a*ob.b<<endl;
}
int main(){
    myclass ob(3,4);
    add(ob);
}