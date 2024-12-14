#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    try{
        if(b==0)throw 0;
        cout<<"Divisor value is="<<a/b<<endl;
    }
    catch(int a){
        cout<<"MATH ERROR!"<<endl;
    }
    return 0;
}
