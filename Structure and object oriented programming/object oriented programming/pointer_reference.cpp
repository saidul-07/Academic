#include<iostream>
using namespace std;
class saidul{
public:
    void dis(int &x,int &y){
        x+=10;
        y+=15;
    }
};
int main()
{
    saidul s;
    int a,b;cin>>a>>b;
    s.dis(a,b);
    cout<<a<<' '<<b<<endl;
    return 0;

}
