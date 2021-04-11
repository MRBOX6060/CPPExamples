#include <iostream>

using namespace std;

class Account{
public:
    virtual void withdraw(double amount){
        cout<<"In Account::Withdraw"<<endl;
    }
    virtual ~Account(){ cout<<"deconstructor in Account"<<endl;}
};
class Saving:public Account{
public:
    virtual void withdraw(double amount){
        cout<<"In Saving::Withdraw"<<endl;
    }
    virtual ~Saving(){ cout<<"deconstructor in Saving"<<endl;}
};
class Checking:public Account{
public:
    virtual void withdraw(double amount){
        cout<<"In Checking:Withdraw"<<endl;
    }
    virtual ~Checking(){ cout<<"deconstructor in Checking"<<endl;}
};
class Trus:public Account{
public:
    virtual void withdraw(double amount){
        cout<<"In Trus:Withdraw"<<endl;
    }
};


int main()
{
    double a = 100.0;
    cout<<"\n =============Pointers====================="<<endl;
    
    Account *p0=new Account();
    Account *p1=new Saving();
    Account *p2=new Checking();
    Account *p3=new Trus();
    p0->withdraw(a);
    p1->withdraw(a);
    p2->withdraw(a);
    p3->withdraw(a);
    cout<<"\n =============Delete Pointers==============="<<endl;
    delete p0;
    delete p1;
    delete p2;
    delete p3;
    return 0;
}