#include<iostream>
using namespace std;
class Addstr{
private:
     string str;
public:
    Addstr(string St=""):str(St){}
    void display(){
        cout<<str<<endl;
    }
    Addstr operator+(Addstr ob){
        Addstr temp;
        temp.str=str+ob.str;
        return temp;
    }
};
int main()
{   Addstr ob1("Object "),ob2("oriented"),c;
    c=ob1+ob2;
    c.display();
    return 0;
}
