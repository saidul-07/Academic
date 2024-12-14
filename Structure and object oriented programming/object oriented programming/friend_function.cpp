#include<iostream>
using namespace std;
class saidul{
private:
    int a,b;
public:
    int add(){
        return a*b;
     }
     friend void set();
};
void set(){
    saidul s;
    cin>>s.a>>s.b;
    cout<<s.add()<<endl;
}
int main()
{
    set();
    return 0;
}
