#include<iostream>
using namespace std;
class mark{
private:
    int x;
public:
    mark(int a=0):x(a){}
    void display()
    {
        cout<<x<<endl;
    }
    mark operator++(){// pre increment operator overloading
       mark temp;
       temp.x=++x;
       return temp;
    }
    mark operator--(){
        mark temp;
        temp.x=--x;
        return temp;
    }
};
int main()
{
    mark a(10),b(5),c,d;
    a.display();//brefore increment
    c=++a;
    a.display();// after pree increment
    c.display();

    b.display();// before decrement;
    d=--b;
    b.display();// after decrement
    d.display();

    return 0;
}
