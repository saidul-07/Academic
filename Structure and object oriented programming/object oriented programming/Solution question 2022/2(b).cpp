#include<iostream>
using namespace std;
class Point{
private:
    int x,y;
public:
    Point():x(0),y(0){}
    Point(int a,int b):x(a),y(b){}

    void display(){
        cout<<'('<<x<<','<<y<<')'<<endl;
    }
    void addPoint(Point ob1,Point ob2){
        x=ob1.x+ob2.x;
        y=ob1.y+ob2.y;
    }
};

int main()
{
    Point A(2,3),B(3,2),C;
    C.addPoint(A,B);
    C.display();

    return 0;
}
