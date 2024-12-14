#include<iostream>
using namespace std;
#define N 10
template<class T> 
class Stack{
    T arr[N];
    int top;
public:
    Stack():top(0){};
    void push(T ch){
    if(top == N){
        cout<<"Overfollow"<<endl;
        return;
    }
    else arr[top]= ch;
    top++;
    }
    void pop(){
    if(top==0){
        cout<<"Underfollow"<<endl;
        return ;
    }
    else top--;

    for(int i = top-1; i>=0; i--)
        cout<< arr[i]<<' ';
    cout<<endl;
    }
};

int main(){
    
    Stack<char> obc;
    Stack<int> obn;
    obc.push('S');
    obc.push('A');
    obc.push('I');
    obc.push('D');

    obn.push(2);
    obn.push(2);
    obn.push(0);
    obn.push(4);

    obc.pop();
    obn.pop();
    obn.pop();


    return 0;
}