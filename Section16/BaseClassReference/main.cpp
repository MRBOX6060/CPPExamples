#include <iostream>


class Account{
public:
    virtual void withdraw(double amount){
        std::cout<<"Account::Withdraw: "<<amount<<std::endl;
    }
};
class Savings:public Account{
public:
    virtual void withdraw(double amount){
        std::cout<<"Saving::Withdraw: "<<amount<<std::endl;
    }
};
class Checking:public Account{
public:
    virtual void withdraw(double amount) {
        std::cout<<"Checking::Withdraw: "<<amount<<std::endl;
    }
};
class Trust:public Checking{
    virtual void withdraw(double amount){
        std::cout<<"Trust::Withdraw: "<<amount<<std::endl;
    }
};
void do_withdraw( Account &account,double amount){
    account.withdraw(amount);
}
int main()
{
    std::cout<<"================Reference=================="<< std::endl;
    Account a;
    Account &account = a;
    account.withdraw(100.0);
    
    Savings s;
    Savings &savings = s;
    savings.withdraw(200.0);
    
    Checking c;
    Checking &checking =c;
    checking.withdraw(400.0);
    
    Trust t;
    Account &acc =t;
    acc.withdraw(300.0);
    
    std::cout<<"\n=================do_withdraw================="<< std::endl;
    Account a1;
    Savings s1;
    Checking c1;
    Trust t1;
    
    do_withdraw(a1,1000.0);
    do_withdraw(s1,1000.0);
    do_withdraw(c1,1000.0);
    do_withdraw(t1,1000.0);
    
   
    //std::cout<<"Amazing! That's my favorite number too"<<std::endl;
    return 0;
}