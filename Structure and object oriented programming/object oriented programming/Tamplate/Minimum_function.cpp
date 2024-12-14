#include<iostream>
using namespace std;
template<class T>T Min(T a,T b){
    if(a<b)return a;
    else return b;
}
int main()
{
    cout<<Min(2,3)<<endl;
    cout<<Min('c','E')<<endl;
    return 0;
}
