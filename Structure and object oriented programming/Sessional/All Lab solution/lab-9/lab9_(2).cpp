#include<iostream>
using namespace std;
class Addnum{
private:
    int x,y;
public:
    Addnum(int x=0,int y=0):x(x),y(y){}
    void display(){
        cout<<x<<"+"<<y<<"i"<<endl;
    }
    friend Addnum add(Addnum ob1,Addnum ob2);
};
Addnum add(Addnum ob1,Addnum ob2){
    Addnum temp;
    temp.x=ob1.x+ob2.x;
    temp.y=ob1.y+ob2.y;
    return temp;
}
int main()
{
    Addnum A(7,5), B(4,2),C;
    C=add(A,B);
    C.display();
    return 0;
}
