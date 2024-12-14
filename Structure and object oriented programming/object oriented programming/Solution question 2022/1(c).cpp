#include<bits/stdc++.h>
using namespace std;
int display(int n){
if(n==0)
    return 0;
else return n%10+display(n/10);
}
int main(){
    int n; cin>>n ;
    cout<<display(n);

return 0;
}
