#include<iostream>
using namespace std;

/*///         Member Variable and Member function///
class ractange{
public:
    int height,width;
    int area(){
    return height*width;
    }
};
int main()
{
    ractange ob;
    ob.height=5;
    ob.width=3;
   cout<<"AREA="<<ob.area()<<endl;
    return 0;
}

///          Member function access outer class///
class ractange{
public:
    int height,width;
    int area();
};
int ractange::area(){
    return height*width;
}
int main()
{
    ractange obj;
    obj.height=20;
    obj.width=3;
    cout<<"AREA="<<obj.area()<<endl;
}

///Using inline function inline means linked up outer funciton for that execuation time decrease///
class ractange{
public:
    int height,width;
    int area();
};
inline int ractange::area(){
return height*width;
}
int main()
{
    ractange obj;
    obj.height=20;
    obj.width=4;
    cout<<"Area="<<obj.area()<<endl;
}

///           Public, Private Access Modifier/////
class ractange{
// by default private member
    int height,width;// we can't access outer ractangle class but use ractangle class others member function
public:
    void set(int h,int w);
    int area();
};
int ractange::area(){
    return height*width;
}
void ractange::set(int h,int w){
    height=h;
    width=w;
}
int main()
{
    ractange obj;
    obj.set(5,6);
    cout<<"Area="<<obj.area()<<endl;
}
///      by default make Public function constructor and destructor/////
class ractange{
private:
    int height,width;
public:
    int area();
    ractange();
    ~ractange();
};
int ractange::area(){
    return height*width;
}
ractange::ractange(){
    height=0;
    width=0;
    cout<<"Constructoring"<<endl;
}
ractange::~ractange(){
cout<<"Destructoring"<<endl;
}
int main()
{
    ractange obj;//constructor call when object create
                // but destructor call when object realese
    cout<<"Area="<<obj.area()<<endl;
}

///     parameterize constructor/////
class ractangle{
    int height,width;
public :
    int area();
    ractangle(int h,int w);
    ~ractangle();
};
ractangle::~ractangle(){
    cout<<"Destructoring"<<endl;
}
int ractangle::area(){
    return height*width;
}
ractangle::ractangle(int h,int w){
    height=h;
    width=w;
    cout<<"Constructoring"<<endl;
}
int main()
{
    ractangle obj(5,10);// must be pass value as parameterize constructor
    cout<<obj.area()<<endl;
}

///      using new and delete for memory allocate and deallocate///
int main()
{
    int *ptr;
    ptr=new int(5);///new keyword use directly asign to pointer
    cout<<*ptr<<endl;
    *ptr=10;/// use new keyword after that directly asign value
    cout<<*ptr<<endl;
    delete(ptr); /// deallocate dynamic memory using delete keyword
    ptr[6]; /// pointer type array
    ptr[0]=6;
    ptr[1]=7;
    cout<<ptr[0]<<' '<<*(ptr+1)<<endl;
    delete (ptr);
    return 0;
}

///       Object assign ..Must be  object have to same class/////
class ractangle{
    int height,width;
public:
    void set(int h,int w);
    int area();
};
void ractangle::set(int h,int w){
    height=h;
    width=w;
}
int ractangle::area(){
return height*width;
}
int main()
{
    ractangle obj,obj1,obj2;
    obj.set(4,5);
    obj1.set(5,6);
    cout<<obj.area()<<endl;
    cout<<obj1.area()<<endl;
    obj2=obj;
    cout<<obj2.area()<<endl;
}

///         object array     //////
class ractangle{
    int height,width;
public:
    void set(int h,int w){
    height=h;
    width=w;
    }
    int area(){
        return height*width;
        }
};
int main()
{
    ractangle obj[4];
    obj[0].set(1,2);
    obj[1].set(2,3);
    obj[2].set(3,4);
    obj[3].set(4,5);
    for(int i=0; i<4; i++){
        cout<<i<<" = "<<obj[i].area()<<endl;
    }
}

///       object pointer         /////////
class ractange{
    int height,width;
public:
    void set(int h,int w){
    height=h;
    width=w;
    }
    int area(){
    return height*width;
    }
};
int main()
{
    ractange obj;
    ractange *ptr;
    obj.set(3,4);
    cout<<obj.area()<<endl;

    ptr=&obj;
    ptr->set(4,5);//////pointer object access with arrow operator
    cout<<obj.area()<<endl;

}
class ractangle{
    int height,width;
public:
    void set(int h,int w){
        height=h;
        width=w;
    }
    int area(){
        return height*area;
    }
};
int main()
{
    ractangle obj;
    obj.set(3,4);
    cout<<obj.area()<<endl;

    return 0;
}
///          THIS pointer      ////////
class ractangle{
int height,width;
public:
    void set(int height,int width){
     this->height=height;
     this->width=width;
    }
    int area(){
        return height*width;
    }
};
int main(){
    ractangle ob;
    ob.set(4,5);
    cout<<ob.area()<<endl;
    return 0;
}
/// passing object as a parameter   ///////
class ractangle{
int height,width;
public:
    void set(int h,int w){
    height=h;
    width=w;
    }
    int area(){
    return height*width;
    }
};
void print(ractangle abc){
    cout<<abc.area()<<endl;
}
int main(){
ractangle obj;
obj.set(4,5);
print(obj);
}
///         Access private member using Friend function/////
class distances{
private:
    int meters;
public:
    distances(){
        meters=0;
    }
    void display(){
        cout<<meters<<endl;
    }
    /// prototype or signature
    friend void result(distances ob);

};
void result(distances abc){
    abc.meters+=5;
    cout<<abc.meters<<endl;
}
int main(){
    distances ob;
    ob.display();
    result(ob);
    ob.display();
return 0;
}*/
class swaping{
public:
    int a=10,b=20;
    void result(swaping &ob);
    void display(){
        cout<<a<<' '<<b<<endl;
    }
};

void result(swaping &ob){
    int temp=ob.a;
    ob.b=temp;
    ob.a=temp;

}
int main(){
    swaping ob;
    result(ob);
    ob.display();
}

