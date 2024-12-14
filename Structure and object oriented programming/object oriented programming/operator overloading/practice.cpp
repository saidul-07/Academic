#include<iostream>
using namespace std;

class coord{
int x, y; 
public:
    coord():x(0),y(0){};
    coord(int a, int b):x(a),y(b){};
    friend istream &operator >>(istream &in, coord &o);
    friend ostream &operator <<(ostream &out,coord &o);
    friend coord operator+(coord b,coord c);
};
istream &operator>>(istream &in,coord &o){
    in>>o.x>>o.y;
    return in;
}
ostream &operator <<(ostream &out,coord &o){
    out<<o.x<<' '<<o.y;
    return out;
}
coord operator+(coord b,coord c){
    coord temp;
    temp.x=b.x+c.x;
    temp.y=b.y+c.y;
    return temp;
}


int main(){
    coord ob(23,45),ob1,ob2,c;
    cin>>ob1;
    cin>>ob2;
    c=ob1+ob2;
    cout<<c;
    return 0;
}