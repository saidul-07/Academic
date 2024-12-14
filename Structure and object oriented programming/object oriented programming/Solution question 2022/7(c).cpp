#include<iostream>
using namespace std;
class World{
public:
    string name;
    int area,savings;
    World():name(""),area(0),savings(0){};
    virtual void status(){
        cout<<"country status"<<endl;
    }
};
class big:public World{
        public:
        big(string s, int a){
            name=s,area=a;
        };
        void status(){
        if(area>=200000)
            cout<<name<<" is big country"<<endl;
        else
            cout<<name<<" is not big country"<<endl;
         }
};
class develop:public World{
    public:
        develop(string n,int s){
            name = n;
            savings = s;
        }
         void status(){
    if(savings>=100000)
        cout<<name<<" is developed country"<<endl;
    else
        cout<<name<<" is not developed country"<<endl;
        }
};
int main(){
    World *p;
    big b("BD",100000443);
    p = &b;
    p->status();

    develop d("Arabia",23433);
    p= &d;
    p->status();
}