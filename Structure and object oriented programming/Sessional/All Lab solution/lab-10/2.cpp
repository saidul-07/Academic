#include<iostream>
using namespace std;
class employee{
public:
    string name;
    int salary;
    void setns(string s,int n){
        name=s;
        salary=n;
    }
    string getname(){ return name;}
    int getsalary() {return salary;}

};
class department{
public:
    string d_name;
    void setd(string s){
        d_name=s;
    }
    string getdname() {return d_name;}

};
class manager:public employee,public department{
public:
    void display(){
        cout<<getname()<<endl;
        cout<<getsalary()<<endl;
        cout<<getdname()<<endl;
    }
};
int main()
{
    manager ob;
    ob.setns("Saidul",2300);
    ob.setd("CSE");
    ob.display();
    return 0;
}
