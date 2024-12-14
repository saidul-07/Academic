#include<iostream>
using namespace std;
class A{
protected:
    int a;
};
class B:public A{
protected:
    int b;
};
class C{
protected:
    int c;
};
class D:public B,public C{
protected:
    int d;
public:
    D(int a=0,int b=0,int c=0,int d=0){
        this->a=a;
        this->b=b;
        this->c=c;
        this->d=d;
    }
    void display()
    {
        cout<<a<<' '<<b<<' '<<c<<' '<<d<<endl;
    }
};
int main()
{   D ob(2,3,4,5);
    ob.display();
    return 0;
}


