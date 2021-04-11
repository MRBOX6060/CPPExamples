#include "Account.h"
#include "SavingsAccount.h" 
#include <iostream>
#include <vector>

void display (const std::vector<Account> &accounts);
void deposit (std::vector<Account> &accounts, double amount);
void withdraw (std::vector<Account> &accounts, double amount);

// Savings account
void display(const std::vector<SavingsAccount> &savings_account);
void deposit(std::vector<SavingsAccount> &savings_account, double amount);
void withdraw(std::vector<SavingsAccount> &savings_account, double amount);

