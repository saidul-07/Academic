#include<iostream>
using namespace std;
class base{
private:
    int x;
public:
    base(int a=0):x(a){}
    virtual void get(){
        cout<<"This is Base Class ";
        cout<<x<<endl;
    }
};
class derived1:public base{
private:
    int y;
public:
    derived1(int a=0):y(a){}
    void get(){
        cout<<"This is Derived1 Class ";
        cout<<y*y<<endl;
    }
};
class derived2:public base{
private:
    int z;
public:
    derived2(int a=0):z(a){}
    void get(){
        cout<<"This is Derived2 Class ";
        cout<<z*z*z<<endl;
    }
};
int main()
{
    base *p;
    base ob(10);
    derived1 d1ob(20);
    derived2 d2ob(30);
    ob.get();
    p=&d1ob;
    p->get();/// use derived1's function

    p=&d2ob;
    p->get();///use derived2's function
    return 0;
}
