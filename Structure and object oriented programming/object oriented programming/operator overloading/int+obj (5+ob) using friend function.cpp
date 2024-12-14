#include<iostream>
using namespace std;
class coord{
  int x, y;
public:
  coord():x(0),y(0){};
  coord(int a, int b):x(a),y(b){};
  void show(){
    cout<< x <<' '<< y << endl;
  }
   friend coord operator+(int i,coord ob);

};
coord operator+(int i,coord ob){
  coord temp;
  temp.x=i+ob.x;
  temp.y=i+ob.y;
  return temp;
}

int main(){
  coord A(2,3),c;

  c= 10+A;
  c.show();

  return 0;
}