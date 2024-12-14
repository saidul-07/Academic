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

    void addTime(Time o1, Time o2){
            second = o1.second+o2.second;
            minutes=o1.minutes+o2.minutes+second/60;
            second%=60;
            hours = o1.hours+o2.hours+minutes/60;
            minutes%=60;
            hours%=24;
    }

};
int main(){
    Time o1(10,40,50), o2(12,19,40), o3;
    o3.addTime(o1, o2);
    o3.display();

    return 0;
}