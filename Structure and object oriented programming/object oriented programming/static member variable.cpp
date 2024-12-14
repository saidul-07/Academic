#include<iostream>
using namespace std;
class share{
    static int a;
    int b;
public:
    void set(int a, int b){
        this->a = a;
        this->b = b;
    }
    void show(){
        cout<< a <<' '<< b << endl;
    }
};
int share::a;
int main(){
    share o1,o2;
    o1.set(2,2);
    o1.show();
    o2.set(1,1);
    o2.show();
    o1.show(); // 1 2
    return 0;
}