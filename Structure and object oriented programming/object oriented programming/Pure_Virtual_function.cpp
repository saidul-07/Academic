#include<iostream>
using namespace std;
class base{
public:
    int x;
    virtual void set()=0;
    int get(){
        return x;
    }
};
class derived:public base{
private:
    int y;
public:
    void set(){
        cout<<"This is pure virtual "<<endl;
        x=10;
    }
};
int main()
{
    derived d;
    d.set();
    cout<<d.get();
    return 0;
}
