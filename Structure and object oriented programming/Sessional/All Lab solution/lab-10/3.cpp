#include<iostream>
using namespace std;
class shape{
public:
    virtual void calculatearea(){
    cout<<"base class"<<endl;

    }
};
class rectangle:public shape{
public:
    int base,height;
    rectangle(int a=0,int b=0):base(a),height(b){}
    void calculatearea(){
        cout<<base*height*0.5<<endl;
    }

};
class circle:public shape{
public:
 int r;
    circle(int a=0):r(a){}
    void calculatearea(){
        cout<<3.1415*r*r;
    }
};
int main()
{
    rectangle ob(4,5);
    circle ob1(5);
    shape *p;
    p=&ob;
    p->calculatearea();
    p=&ob1;
    p->calculatearea();
    return 0;
}
