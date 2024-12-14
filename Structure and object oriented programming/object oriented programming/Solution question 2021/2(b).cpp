#include<iostream>
using namespace std;

class myclass{
private:
    int a, b; 
public:
    int get(){
        return a*b;
    }
    friend void set();
};
void set(){
    myclass ob;
    cin >> ob.a >> ob.b;
    cout<< ob.get();
}
int main(){
    
    set();
    return 0;
}