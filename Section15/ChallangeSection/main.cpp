#include <iostream>
#include "Account.h"
#include "SavingsAccount.h"
#include "Account_Util.h"
#include <vector>

using namespace std;


int main()
{
    vector<Account> accounts;
    accounts.push_back(Account());
    accounts.push_back(Account("Larry"));
    accounts.push_back(Account("Frank",10000));
    accounts.push_back(Account("Moe", 5000));
    display(accounts);
    deposit(accounts, 2000);
    withdraw(accounts, 3000);
    
    vector<SavingsAccount> s_acc;
    s_acc.push_back(SavingsAccount("DucAnh"));
    s_acc.push_back(SavingsAccount("CamVan",10000));
    s_acc.push_back(SavingsAccount("HoaiAn",20000,5));
    display(s_acc);
    deposit(s_acc, 5000);
    withdraw(s_acc, 3000);
    
    return 0;
}