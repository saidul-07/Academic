#include<iostream>
using namespace std;
class Stack{
    int top,n;
    int arr[10];
public:
    Stack(int i,int j):top(i),n(j){};
    void push(int x){
        if(top==n){
            cout<<"Overfollow"<<endl;
            return;
        }
        arr[top] = x;
        top++;
    }
    void pop(){
        if(top<0){
            cout<<"Underfollow"<<endl;
            return;
        }
        top--;
    }
    void display(){
        for(int i = top-1; i>=0; i--)
            cout<<arr[i]<<endl;
        
    }
};
int main(){
    Stack ob(0,6);
    ob.push(2);
    ob.push(2);
    ob.push(0);
    ob.push(4);

    ob.pop();
    ob.display();
}