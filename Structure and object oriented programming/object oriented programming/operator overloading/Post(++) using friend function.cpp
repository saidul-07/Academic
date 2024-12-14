#include<iostream>
using namespace std;
class coord{
public:
    int x;
public:
    coord(int a=0):x(a){}
    void display(){
    cout<<x<<endl;
    }
    friend coord operator++(coord &ob,int);//friend function must have to pass object number of operand and also pass int
    friend coord operator--(coord &ob);
};
coord operator++(coord &ob,int){  /// post/pre increment must have to pass object address
    coord temp=ob;
    ob.x++;
    return temp;
}
coord operator--(coord &ob){
    coord temp;
    temp.x=--ob.x;
    return temp;
}
int main()
{
    coord a(10),c;
    //post increment.....
    (a++).display();//10

   //pre decrement a=11
    c=--a;
    a.display();//10
    return 0;
}
