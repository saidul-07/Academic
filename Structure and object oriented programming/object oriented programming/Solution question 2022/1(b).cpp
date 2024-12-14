#include<iostream>
using namespace std;
void display(){
    static int cnt;
    cout<<"I have been called "<<++cnt<<" times"<<endl;
}
int main(){
    
    for(int i=1; i<=10; i++)
        display();
    return 0;
}