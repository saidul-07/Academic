#include<iostream>
using namespace std;
class animal{
public :
    virtual void makesound()=0;
};
class dog:public animal{
    void makesound(){
        cout<<"This is dog sound"<<endl;
    }
};
class cat:public animal{
public:
    void makesound(){
        cout<<"This is cat sound"<<endl;
    }
};
int main()
{
    dog ob1;
    cat ob2;
    animal *p;
    p=&ob1;
    p->makesound();
    p=&ob2;
    p->makesound();
    return 0;
}
