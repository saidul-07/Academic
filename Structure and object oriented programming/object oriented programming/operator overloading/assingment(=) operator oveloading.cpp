#include<iostream>
#include<cstring>
using namespace std;
class strtype{
    char *str;
    int len;
public:
    strtype(const char *s){
       len = strlen(s)+1;
       str = new char[len];
       strcpy(str,s);
    }
    ~strtype(){
        delete []str;
        }
    void display(){
        cout<<str <<endl;
    }
    strtype &operator=(strtype &ob){
        if(this==&ob){
            return *this;
        }
        delete[] str;
        str = new char[strlen(ob.str)+1];
        strcpy(str,ob.str);
        return *this;
    }
};
int main(){
    strtype s1("Saidul"),s2("sayed");
    s1.display();
    s2.display();
    s1 = s2;
    
    s1.display();
    s2.display();

    return 0 ;

}
