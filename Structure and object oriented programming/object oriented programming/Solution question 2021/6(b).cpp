#include<iostream>
using namespace std;
class CPP{
    string name,address;
    int establisment_year;
public:
    CPP(string n,int y, string a):name(n),establisment_year(y),address(a){};
    void display(){
        cout<<"Name :"<<name<<endl;
        cout<<"Establised year:"<<establisment_year<<endl;
        cout<<"Address:"<<address<<endl;
    }
    ~CPP(){
        cout<<"Destructoring"<<endl;
    }
};
int main(){
    CPP ob("Saidul",2001,"dhaka");
    ob.display();

    return 0 ;
}