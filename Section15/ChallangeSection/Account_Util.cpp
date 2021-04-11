#include "Account_Util.h"

void display (const std::vector<Account> &accounts){
    std::cout<<"\n====Accounts==================================="<<std::endl;
    for ( auto &account:accounts){
        std::cout<<account<<std::endl;
    }
}
void deposit (std::vector<Account> &accounts, double amount){
    std::cout<<"\n====Deposit to Accounts========================="<<std::endl;
    for(auto &account:accounts){
        if(account.deposit(amount)){
            std::cout<<"Deposit "<<amount<<" to "<<account<<std::endl;
        }else
            std::cout<<"Failed deposit of "<<amount<<" to"<<account<<std::endl;
    }
}
void withdraw (std::vector<Account> &accounts, double amount){
    std::cout<<"\n====Withdraw from Accounts======================"<<std::endl;
    for (auto &account:accounts){
        if(account.withdraw(amount)){
            std::cout<<"Withdrew "<<amount<<" from "<<account<<std::endl;
        }else
            std::cout<<"Failed withdraw "<<amount<<" from " <<account<<std::endl;
    }
}

// Savings account
void display(const std::vector<SavingsAccount> &savings_account){
    std::cout<<"\n====Savings Accounts============================"<<std::endl;
    for ( auto &account:savings_account){
        std::cout<<account<<std::endl;
    }
}
void deposit(std::vector<SavingsAccount> &savings_account, double amount){
    std::cout<<"\n====Deposit to Savings Account================="<<std::endl;
    for(auto &account:savings_account){
        if(account.deposit(amount)){
            std::cout<<"Deposit "<<amount<<" to "<<account<<std::endl;
        }else
            std::cout<<"Failed deposit of "<<amount<<" to"<<account<<std::endl;
    }
}
void withdraw(std::vector<SavingsAccount> &savings_account, double amount){
    std::cout<<"\n====Withdraw from Savings Accounts============="<<std::endl;
    for (auto &account:savings_account){
        if(account.withdraw(amount)){
            std::cout<<"Withdrew "<<amount<<" from "<<account<<std::endl;
        }else
            std::cout<<"Failed withdraw "<<amount<<" from " <<account<<std::endl;
    }
}