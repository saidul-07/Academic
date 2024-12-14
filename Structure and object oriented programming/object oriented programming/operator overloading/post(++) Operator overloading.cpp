#include<iostream>
using namespace std;
class mark{
private:
    int x;
public:
    mark(int a=0):x(a){}
    void display()
    {
        cout<<x<<endl;
    }
    mark operator++(int){//post inc/dre must have to pass parameter
        // returned value should be a copy of the object before increment
        mark temp=*this;
        x++;
        return temp;
    }
    mark operator--(int){
        mark temp=*this;
        x--;
        return temp;
    }
};
int main()
{
    mark a(10),c,b(5),d;
    a.display();//before increment 10
    (a++).display();//after post increment 10
    a.display(); //11

    b.display();//before post decrement 5
    (b--).display(); //after post dec 5
    return 0;
}
