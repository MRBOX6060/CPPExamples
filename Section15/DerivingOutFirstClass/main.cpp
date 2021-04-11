#include <iostream>
#include <vector>
#include "Account.h"
#include "Savings_Account.h"


using namespace std;

int main()
{
    cout<<"\n====Accounts========================================"<<endl;
    Account acc{};
    acc.deposit(200000.0);
    acc.withdraw(50000.0);
    Account *ptr_acc{nullptr};
    ptr_acc = new Account();
    ptr_acc->deposit(100000.0);
    ptr_acc->withdraw(50000.0);
    
    cout<<"\n====Savings Account================================="<<endl;
    Savings_Account s_acc{};
    s_acc.deposit(200000.0);
    s_acc.withdraw(50000.0);
    Savings_Account *p_s_acc{nullptr};
    p_s_acc = new Savings_Account();
    p_s_acc->deposit(500000.0);
    p_s_acc->withdraw(100000.0);
    
    return 0;
}