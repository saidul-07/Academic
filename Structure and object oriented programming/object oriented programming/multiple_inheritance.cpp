#include<iostream>
using namespace std;
class A{
protected:
    int a;
};
class B{
protected:
    int b;
};
class C:public A,public B{
protected:
    int c;
public:
    C(int a=0,int b=0,int c=0){
        this->a=a;
        this->b=b;
        this->c=c;
    }
    void display()
    {
        cout<<a<<' '<<b<<' '<<c<<endl;
    }
};
int main()
{
    C obj(2,3,4);
    obj.display();
    return 0;
}
