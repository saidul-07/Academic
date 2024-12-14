#include<iostream>
using namespace std;
class A{
protected:
    int a;
};
class B:public A{ /// inherit Class A as a public but still member variable working protected
protected:
    int b;
public:
    B(int a=0,int b=0){
    this->a=a;
    this->b=b;
    }
    void display(){
    cout<<a<<' '<<b<<endl;
    }
};
int main()
{
    B obj(3,4);
    obj.display();
    return 0;
}
