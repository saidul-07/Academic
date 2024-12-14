#include<iostream>
using namespace std;
class Time{
private:
    int hours,minutes,second;
public:
    Time():hours(0),minutes(0),second(0){}
    Time(int h,int mi,int se):hours(h),minutes(mi),second(se){}
    void display()
    {
        cout<<"hh:mm:ss "<<hours<<' '<<minutes<<' '<<second<<endl;
    }
    Time operator+(Time ob){
        int h=hours+ob.hours;
        int m=minutes+ob.minutes;
        int s=second+ob.second;
        m+=s/60;
        s%=60;
        h+=m/60;
        m%=60;
        return Time(h,m,s);
    }

};
int main()
{
    Time t1(8,34,55),t2(5,42,19),t;
    t=t1+t2;
    t.display();
    return 0;
}
