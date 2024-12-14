#include <iostream>
using namespace std;
class Familly{
public:
    int size;
    string names[10];
    int ages[10];
    Familly(int n, string name[], int age[]):size(n){
        for(int i = 0; i<size; i++){
            names[i]=name[i];
            ages[i]=age[i];
        }
    };
    void display(){   ///display avg age
        int total = 0;
        for(int i =0 ; i<size; i++)
                total+=ages[i];
            cout<<"Average Age = "<<total/size<<endl;
        for(int i= 0; i<size; i++){
            cout<<"Names :"<<names[i]<<" and age ="<<ages[i]<<endl;
        }
        cout<< endl;
    }
    int eldest(){
        int max_age = ages[0];
        for(int i= 0; i<size; i++)
            if(ages[i]>max_age)
                max_age = ages[i];
        return max_age;
    }
    int youngest(){
        int min_age = ages[0];
        for(int i= 0; i<size; i++)
            if(ages[i]<min_age)
                min_age = ages[i];
        return min_age;
    }
};
int main(){
    string names1[]={"saidul","sayeed","saiful"};
    int ages1[]={23,45,23};
    Familly ob1(3,names1,ages1);

    string names2[]={"saidul","sayeef","saikot"};
    int ages2[]={20,43,23};
    Familly ob2(3,names2,ages2);
    
    ob1.display();
    ob2.display();

    cout<<"Eldest person age ="<<max(ob1.eldest(), ob2.eldest())<<endl;
    cout<<"youngest person age ="<<min(ob1.youngest(), ob2.youngest())<<endl;

    return 0;
}