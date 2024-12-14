#include<iostream>
using namespace std;
int main(){
string oldstr,newstr=" "; cin >> oldstr;
int i;
for(i=0; oldstr[i]!=0; i++)
    newstr+=oldstr[i];
cout<<"Copy stirng="<<newstr<<" and length ="<<i<<endl;

return 0;
}
