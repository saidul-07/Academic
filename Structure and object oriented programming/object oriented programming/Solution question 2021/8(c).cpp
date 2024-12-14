#include<iostream>
using namespace std;
class Mammals{
    public:
        void display(){
            cout<<"I am Mammal "<<endl;
        }
};
class MarineAnimals{
    public:
        void display(){
            cout<<"I am marine animal"<<endl;
        }
};
class BlueWhale:public Mammals,public MarineAnimals{
    public:
    void display(){
        cout<<"I belong to the both caterories: Mammals as well as Marine Animals"<<endl;
    }
};
int main(){
    Mammals oma;
    oma.display();// query by self object

    MarineAnimals om;
    om.display();

    BlueWhale b;
    b.display();
    b.Mammals::display();// query by child object
    b.MarineAnimals::display();

    return 0;
}