#include<iostream>
using namespace std;
int factorial(int n){
    if(n==0)return 1;
    return n*factorial(n-1);
}
int main(){
int n; cin >> n;
try{
    if(n<0)
        throw(n);
    cout<<"Factorial Value of n is= "<<factorial(n)<<endl;
}catch(int i){
    cout<<"MATH ERROR!"<<endl;
}
return 0;
}
