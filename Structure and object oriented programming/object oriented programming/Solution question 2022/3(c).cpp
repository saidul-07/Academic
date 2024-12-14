#include<iostream>
using namespace std;
class point{
private:
    int x,y;
public:
    point():x(0),y(0){}
    point(int a,int b):x(a),y(b){}
    void display(){
        cout<<x<<' '<<y<<endl;
    }
    point operator+(point ob){
        point temp;
        temp.x=x+ob.x;
        temp.y=y+ob.y;
        return temp;
    }
    point operator-(point ob){
        point temp;
        temp.x=x-ob.x;
        temp.y=y-ob.y;
        return temp;
    }

    point operator++(){
        return point(x,++y);
    }
};
int main()
{
    point p1(2,4),p2(4,3),p3;
    p3=p1+p2;
    p3.display();

    p3=p1-p2;
    p3.display();

    p3=++p1;
    p3.display();//3 5
    p1.display();//3 5

    return 0;
}
