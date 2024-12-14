#include<iostream>
using namespace std;
class Distance{
    int feet;
    float inches;
public:
    Distance(int f,float in):feet(f),inches(in){};
    void showdist(){
        cout<<feet<<"'-"<<inches<<"''"<<endl;
    }
    friend float square(Distance);
};
float square(Distance d){
    float total = d.feet+(d.inches/12);
    return total*total;
}
int main(){
    Distance dist(3,6.0);
    float sqft = square(dist);

    cout<<"Distance = ";
    dist.showdist();
    cout<<"Square = "<<sqft<<" square feet"<<endl;
    return 0;
}