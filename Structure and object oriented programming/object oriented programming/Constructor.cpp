#include<iostream>
using namespace std;
class ractange{
private:
    int height,width;
public:
    int area();
    ractange();
    ~ractange();
};
int ractange::area(){
    return height*width;
}
ractange::ractange(){
    height=0;
    width=0;
    cout<<"Constructoring"<<endl;
}
ractange::~ractange(){
cout<<"Destructoring"<<endl;
}
int main()
{
    ractange obj;//constructor call when object create
                // but destructor call when object realese
    cout<<"Area="<<obj.area()<<endl;
}
