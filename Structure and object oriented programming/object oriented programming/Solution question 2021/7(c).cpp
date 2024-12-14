#include<iostream>
using namespace std;
class parallelogram{
    int x;
public:
    parallelogram(int a = 0):x(a){};
    void display(){
        cout<<"Parallelogram"<<endl;
    }
};
class ractangle:virtual public parallelogram{
    public:
        ractangle(int x):parallelogram(x){};
        void displayr(){
            cout<<"Ractangle "<<endl;
        }
};
class rhombus:virtual public parallelogram{
    public:
        rhombus(int x):parallelogram(x){};
        void displayrh(){
            cout<<"Rhombus "<<endl;
        }
};
class squre:public ractangle,public rhombus{
    public:
        squre(int x = 0):ractangle(x),rhombus(x){};
        void displays(){
            cout<<"squre"<<endl;
        }
};
int main(){
    squre os(5);
    os.display();
    os.displayr();
    os.displayrh();
    os.displays();
    return 0;
}