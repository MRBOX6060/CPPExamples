#include <iostream>
#include "Account.h"

using namespace std;

int main()
{
    Account frank_account;
    frank_account.set_name("Duc Anh");
    frank_account.set_balance(10000.0);
    if(frank_account.deposit(200.0)){
        cout<<"Deposit Ok"<<endl;
    }else
        cout<<"Not allow Deposit!"<<endl;

    if(frank_account.withdraw(3200.0)){
        cout<<"WithDraw OK!"<<endl;
    }else
        cout<<"Not Sufficient Funds!"<<endl;
        
    if(frank_account.withdraw(10000.0)){
        cout<<"WithDraw OK!"<<endl;
    }else
        cout<<"No Sufficient Funds!"<<endl;
    return 0;
}