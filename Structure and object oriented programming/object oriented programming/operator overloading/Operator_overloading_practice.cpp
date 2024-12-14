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
};
coord operator++(coord &ob,int){
    coord temp;
    temp.x=ob.x++;
    return temp;
}
int main()
{
    coord a(10),c;
    c=a++;
    a.display();//11
    c.display();//10
    return 0;
}
