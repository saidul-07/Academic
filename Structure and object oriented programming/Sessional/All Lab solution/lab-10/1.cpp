#include<iostream>
using namespace std;
class shape{
public:
    int height,width;
    shape(int a=0,int b=0):height(a),width(b){}
    void set(int h,int w){
        height=h;
        width=w;
    }
    void get(){
        cout<<height<<' '<<width<<endl;
    }
};
class ractangle:public shape{
public:
        ractangle(int a=0,int b=0):shape(a,b){}
        void area(){
            cout<<height*width<<endl;
        }
};
int main()
{
    ractangle d1(2,6);
    d1.get();
    d1.area();
    return 0;
}
