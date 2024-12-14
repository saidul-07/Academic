#include<iostream>
using namespace std;
class mark{
private:
    int x;
public:
    mark(int a=0):x(a){}
    void display(){
        cout<<"Your Marks="<<x<<endl;
    }
    mark operator+(mark ob);
    //friend mark operator+(mark ob1,mark ob2);// must have to pass 2 object friend function
//    mark operator+(mark ob){/// inline function
//        mark temp;
//        temp.x=x+ob.x;
//        return temp;
//    }
};
mark mark::operator+(mark ob){//outline function
    mark temp;
    temp.x=x+ob.x;
    return temp;
}
//mark operator+(mark ob1,mark ob2){// friend function
//    mark temp;
//    temp.x=ob1.x+ob2.x;
//    return temp;
//}
int main()
{
    mark A(10),B(20),C;
    C=A+B;
    C.display();
    return 0;
}
