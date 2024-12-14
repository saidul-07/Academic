#include<iostream>
using namespace std;
class saidul{
private:
    int a,b;
public:
    int add()
    {
        return a+b;
    }
    void set(int x,int y){
    a=x;
    b=y;
    }
};
int main()
{
    saidul s;
    s.set(4,5);
    cout<<s.add();
    return 0;
}
