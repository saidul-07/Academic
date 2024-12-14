#include<iostream>
using namespace std;
const int n=100;
template<class T>
class Stack{
    T top,arr[n];
public:
    Stack():top(-1){}
    void push(T ch){
       if(top+1==n){
        cout<<"Overfollow"<<endl;
        return;
            }
    else arr[++top]=ch;
    }
    void pop(){
        if(top<0){
        cout<<"Underfollow"<<endl;
        return;
        }
    else --top;

    }
    void display(){
        cout<<"Top to bottom: ";
        for(int i=top; i>=0; i--)
            cout<<arr[i];
        cout<<endl;
    }
};
int main()
{
    Stack<char>s;
    s.push('s');
    s.push('a');
    s.push('i');
    s.pop();
    s.display();
    Stack<int>p;
    p.push(4);
    p.push(5);
    p.push(6);
    p.pop();
    p.display();


    return 0;
}
