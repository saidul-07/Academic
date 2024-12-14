#include<iostream>
using namespace std;
class saidul{
private:
    int a,b;
public:
    saidul(int x,int y):a(x),b(y){}
    saidul(saidul &o){
        a=o.a;
        b=o.b;
    }
    void display(){
        cout<<a<<' '<<b<<endl;
    }
};
int main()
{
    saidul s(3,6);
    s.display();

    saidul r(s); ///         copy constructor ///
    r.display();
    return 0;
}
