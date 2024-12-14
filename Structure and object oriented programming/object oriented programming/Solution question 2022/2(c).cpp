#include<iostream>
using namespace std;
class Point{
private:
    float x,y;
public:
    Point():x(0),y(0){}
    Point(float a,float b):x(a),y(b){}

    operator float(){//Convertion Function
        return x+y;
    }
};
int main(){

    Point P(6,7.5);
    float x=P;
    cout<<x<<endl;
    x=P+10;
    cout<<x<<endl;

return 0;
}
