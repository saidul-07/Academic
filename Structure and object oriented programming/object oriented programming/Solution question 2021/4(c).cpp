#include<iostream>
using namespace std;
double my_sqrt(double n){
    double root ;
    for(int i= 0; i*i<=n; i++)
            root = i;
    double inc = 0.1;
    for(int i = 1; i<=5; i++){
        while((root+inc)*(root+inc)<=n)
                root+=inc;
        inc/=10;
    }
    return root;
}
int main(){
    int n; cin >> n;
    try{
        if(n<0) throw(n);
         cout<< my_sqrt(n) << endl;

    }catch(int i){
        cout<<"MATH ERROR!" <<endl;
    }
}