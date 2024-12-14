#include<iostream>
using namespace std;
class saidul{
private:
    int a,b;
public:
    int add();
    void set(int,int);
};
int saidul::add(){
    return a+b;
}
void saidul::set(int x,int y){
    a=x;
    b=y;
}
int main(){
    saidul s;
    s.set(6,7);
    cout<<s.add()<<endl;
}
