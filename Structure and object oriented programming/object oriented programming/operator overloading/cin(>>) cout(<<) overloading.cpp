#include<iostream>
using namespace std;
class coord{
public:
    int x;
public:
    coord(int a=0):x(a){}
    friend istream &operator>>(istream &in,coord &y);
    friend ostream &operator<<(ostream &out,coord &y);
};
istream &operator>>(istream &in,coord &y){
    in>>y.x;
    return in;
}
ostream &operator<<(ostream &out,coord &y){
    out<<y.x;
    return out;
}
int main()
{
    coord ob(10),ob1;
    cin>>ob1;
    cout<<ob1;
    return 0;
}
//..................input two num and their sum.....//

//#include<iostream>
//using namespace std;
//
//class coord{
//public:
//    int x;
//    friend istream &operator>>(istream &in,coord &o);
//    friend ostream &operator<<(ostream &out,coord &o);
//    friend coord operator+(coord o1,coord o2);
//};
//istream &operator>>(istream &in,coord &o){
//    in>>o.x;
//    return in;
//}
//ostream &operator<<(ostream &out,coord &o){
//    out<<o.x;
//    return out;
//}
//coord operator+(coord o1,coord o2){
//    coord temp;
//    temp.x=o1.x+o2.x;
//    return temp;
//}
//int main()
//{
//    coord ob1,ob2,c;
//    cin>>ob1;
//    cin>>ob2;
//    c=ob1+ob2;
//    cout<<c<<endl;
//}
