#include<iostream>
using namespace std;
class A{
protected:
    int a;
};
class B:public A{
protected:
    int b;
public:
    B(int a=0,int b=0){
        this->a=a;
        this->b=b;
    }
    void display()
    {
        cout<<a<<' '<<b<<endl;
    }
};
class C:public A{
protected:
    int c;
public:
    C(int a=0,int c=0){
        this->a=a;
        this->c=c;
    }
    void display()
    {
        cout<<a<<' '<<c<<endl;
    }
};
int main()
{    B ob(2,3);
    ob.display();
    C obj(4,5);
    obj.display();
    return 0;
}

