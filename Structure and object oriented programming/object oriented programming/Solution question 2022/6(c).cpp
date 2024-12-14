#include<iostream>
using namespace std;

class dist{
   public:
    double distance;
    dist(double d = 0):distance(d){};
    virtual void trav_time(){
        cout<<distance/60.0<<endl;
    }
};
class metric:public dist{
    public:
        metric(double d = 0):dist(d){};
        void trav_time(){
            cout<<distance/100.0<<endl;
        }
};
int main(){
    dist ob(10.0), *p;
    metric od(10.0);

    p = &ob;
    p->trav_time();
    p = &od;
    p->trav_time();

    return 0;
}