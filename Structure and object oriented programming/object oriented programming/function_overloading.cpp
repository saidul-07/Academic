#include<iostream>
using namespace std;
class saidul{
public:
    int add(int a,int b){
        return a+b;
    }
    double add(double a,double b){
        return a+b;
    }
};
int main()
{   saidul s;
    cout<<s.add(4,5)<<endl;
    cout<<s.add(3.5,5.5)<<endl;
    return 0;
}
