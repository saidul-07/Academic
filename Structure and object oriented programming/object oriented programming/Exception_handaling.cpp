#include<iostream>
using namespace std;
int main()
{
//    int a,b;cin>>a>>b; ///devide by zero
//    try{
//        if(b<=0)throw 0;
//        cout<<a/b;
//    }
//    catch(int){
//        cout<<"MATH ERROR!"<<endl;
//    }

//    int n;cin>>n; ///Exception handling for Factorial
//    try{
//        if(n<0)throw 0;
//        int fact=1;
//        while(n)fact*=n--;
//        cout<<fact<<endl;
//    }
//    catch(int){
//        cout<<"MATH ERROR!"<<endl;
//    }

try{
int n;cin>>n;
if(n<0)throw 0.0;
double root;
for(int i=0; i*i<=n; i++)root=i;
double inc=0.1;
for(int i=1; i<=n; i++){
    while((root+inc)*(root+inc)<=n){
        root+=inc;
    }
    inc/=10;
}
cout<<root<<endl;
    }
 catch(double){
    cout<<"MATH ERROR!"<<endl;
 }
    return 0;
}
