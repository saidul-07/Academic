#include<iostream>
using namespace std;

class countDown{
    int inc, target,current;
public:
    countDown(int t,int i= 1){
        target = t;
        inc = i;
        current = 0;
    }
    bool counting(){
        current +=inc;
        if(current>=target){
            cout<< "\a";
            return false;
        }
        cout<<"current"<<' '<<current<<endl;
        return true;
    }

};
int main(){
    countDown ob(10,2);

    while(ob.counting());
    return 0;
}