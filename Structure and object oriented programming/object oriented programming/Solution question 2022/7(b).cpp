#include<iostream>
using namespace std;
class Base1{
public:
    int a;
public:
    Base1(int i=0):a(i){}
    virtual void display(){
        cout<<"Base class "<<a<<endl;
    }
};
class Base2{
public:
    int b;
public:
    Base2(int i=0):b(i){}
    virtual void display(){
        cout<<"Base class "<<b<<endl;
    }
};
class Derived:public Base1,public Base2{
int c;
public:
    Derived(int i=0,int j=0,int k=0):Base1(i),Base2(j),c(j){}
    void display(){
        cout<<"Derived "<<a<<' '<<b<<' '<<c<<endl;
    }
};
int main(){
    Derived ob(3,4,5);
    ob.display();

return 0;
}
