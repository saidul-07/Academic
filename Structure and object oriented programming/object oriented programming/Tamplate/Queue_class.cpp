#include<iostream>
using namespace std;
const int n=1000;
template<class T>
class Queue{
private:
    int Front;
    T arr[n];
public:
    Queue():Front(-1){}
    void enqueue(T st){
        if(Front+1==n){
            cout<<"Overfollow"<<endl;
            return;
        }
        else arr[++Front]=st;
    }
    void dequeue(){
        if(Front<0){
            cout<<"Underfollow"<<endl;
            return;
        }
        else --Front;
    }
    void display(){
        cout<<"Bottom to Top: ";
        for(int i=0; i<=Front; i++)
            cout<<arr[i]<<' ';
        cout<<endl;
    }
};
int main()
{
    Queue<string>q;
    q.enqueue("saidul");
    q.enqueue("Tanha");
    q.enqueue("Mukta");
    q.enqueue("Sadia");
    q.dequeue();
    q.display();
    return 0;
}
