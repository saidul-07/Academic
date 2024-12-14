#include<iostream>
using namespace std;
class base{
public:
    int i;

};
class d1:virtual public base{
public:
     int j;
};
class d2:virtual public base{
public:
     int k;
};
class d3:public d1,public d2{
    public:
        d3(int a, int b, int c){
            i=a,j=b,k=c;
        };
       void display(){
        cout<<i*j*k<<endl;
       }
};

int main(){
    d3 ob(2,3,4);
    ob.display();
    return 0;
}
