#include<iostream>
#include<cstring>
using namespace std;
class arra{
    int a[3];
public:
    arra(){
    for(int i= 0; i<3; i++)
        a[i] = i;
    }
    int &operator[](int i){
        return a[i];
    }
    int operator[](const char *s){
        if(strcmp(s,"zero")==0)
                return a[0];
        else if(strcmp(s,"one")==0)
                return a[1];
        else if(strcmp(s,"two")==0)
                return a[2];
        return -1;
    }
};
int main(){
    arra ob;
    cout<<ob[1]<<endl;
    cout<<ob["two"]<<endl;

    ob[0] =5;
    cout<<ob["zero"]<<endl;
    cout<<ob[0]<<endl;
    cout<<ob[3]<<endl;
    return 0;
}