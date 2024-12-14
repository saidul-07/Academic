#include<iostream>
using namespace std;
class base{
    int x; 
public:
    void setx(int a){
        x = a;
    }
    void getx(){
        cout<< x << endl;
    }
};
class derived : public base{
    int y;
public:
    void sety(int a){
        y = a;
    }
    void gety(){
        cout<< y << endl;
    }
};
int main(){

    base ob, *p;
    p->setx(5);
    p->getx();
    derived od;
    p = &od;
    //p->getx();
}