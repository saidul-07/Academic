#include<iostream>
using namespace std;

class Time{
    int hours, minutes, second;
public:
    Time():hours(0),minutes(0),second(0){};
    Time(int h, int m, int s):hours(h),minutes(m),second(s){};

    void display(){
        cout<<hours<<"hh"<<' '<<minutes<<"mm"<<' '<<second<<"ss"<<endl;
    }
    Time operator+(Time o1){ // adding two object
    Time ob;
     ob.second =second+o1.second;
     ob.minutes=minutes+o1.minutes+ob.second/60;
     ob.second%=60;
     ob.hours =hours+o1.hours+ob.minutes/60;
     ob.minutes%=60;
     ob.hours%=24;
     return ob;
    }
    Time operator++(int){ // post increment
            Time ob = *this;
            second++;
            minutes+=second/60;
            second%=60;
            hours+=minutes/60;
            minutes%=60;
            return ob;
    }
    Time operator++(){ // pre increment
            Time ob;
            second++;
            minutes+=second/60;
            second%=60;
            hours+=minutes/60;
            minutes%=60;
            return *this;
    }
};

int main(){
    Time x(10,40,50), y(12,19,40), z,post,pre;
    z= x+y;
    z.display();
    post= z++;
    post.display(); // 30 second
    z.display(); // 31 second

    pre = ++z;
    pre.display(); // 32 second
    z.display(); // 32 second

    return 0;
}