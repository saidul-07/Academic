#include<iostream>
using namespace std;
class BankAccount{
private:
    int balance,accountNumber;
    string customerName;
public:
    BankAccount():balance(0),accountNumber(0),customerName(""){}
    BankAccount(int b,int n,string name):balance(b),
                        accountNumber(n),customerName(name){}
    friend void transferFunds(BankAccount &ob1,BankAccount &ob2);
    friend class BankManager;
};
void transferFunds(BankAccount &ob1,BankAccount &ob2){
    ob1.balance+=ob2.balance;
    ob2.balance-=ob2.balance;

}
class BankManager{
public:
    void display(BankAccount &ob){
        cout<<"AccountNumber= "<<ob.accountNumber<<endl;
        cout<<"Balance= "<<ob.balance<<endl;
        cout<<"Name= "<<ob.customerName<<endl;
    }
};
int main()
{
    BankAccount Ac1(1200,101,"Saidul"),Ac2(1000,102,"islam"),ac;
    BankManager ob;
    ob.display(Ac1);/// Before fundTransfer
    ob.display(Ac2);
    cout<<endl;
    transferFunds(Ac1,Ac2);
    ob.display(Ac1);/// After Fundtransfer
    ob.display(Ac2);

    return 0;
}
