#include<iostream>
using namespace std;
class saidul{
private:
    int a,b;
public:
    saidul(int x=0,int y=0){
        a=x;
        b=y;
    }
    //saidul(int a,int b):a(a),b(b){} // alternative way initialize using parameterrized constructor
    void dis(){
        cout<<a+b<<endl;
    }
};
int main()
{
    saidul s(4,9);
    s.dis();
    return 0;
}

