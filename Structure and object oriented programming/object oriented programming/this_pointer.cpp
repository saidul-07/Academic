#include<iostream>
using namespace std;

class myclass{
private:
    int a,b;
public:
    myclass(int c,int d):a(c),b(d){}
    void add(myclass &ob){
        int temp=ob.a;
        ob.a=ob.b;
        ob.b=temp;
    }
    void print(){
        cout<<a<<' '<<b<<endl;
    }
};
int main()
{
    myclass ob(5,6);
    ob.add(ob);
    ob.print();

    return 0;
}
