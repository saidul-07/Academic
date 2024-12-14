#include<iostream>
#include<cstring>
using namespace std;
class strType{
    char str[80];
public:
    strType(const char* s){
        strcpy(str,s);
    }
    operator const char*(){
        return str;
    }
};

int main(){

    strType s("my name is saidul");
    const char* p;
    p = s;
    cout<< p << endl;
}