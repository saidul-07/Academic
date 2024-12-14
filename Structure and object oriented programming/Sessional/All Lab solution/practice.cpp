#include<iostream>
using namespace std;
class base{
public:
    int lenght,height;
    base(int l , int h):lenght(l),height(h){};
     
     virtual void getarea()=0;
};
class ractangle : public base{
public:
        ractangle(int l, int h):base(l,h){};
        void getarea(){
            cout<<lenght*height<<endl;
        }
};
class triangle : public base{
public:
        triangle(int l, int h):base(l,h){};
        void getarea(){
            cout<<0.5*lenght*height<<endl;
        }
};
int main(){
    
    triangle t(5,6),*p;
    t.getarea();
    p = &t;
    p->getarea();
    ractangle r(6,7),*l;
    l=&r;
    l->getarea();
}