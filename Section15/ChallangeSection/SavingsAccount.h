#ifndef _SAVINGS_ACCOUNT_H_
#define _SAVINGS_ACCOUNT_H_
#include "Account.h"


class SavingsAccount : public Account
{
    friend std::ostream &operator<<(std::ostream &os, const SavingsAccount &savings_account);
private:
    static constexpr const char* def_name = "Uname Savings Account";
    static constexpr const double def_balance = 0.0;
    static constexpr const double def_int_rate = 0.0;
protected:
    double int_rate;
public:
    SavingsAccount(std::string name = def_name, double balance = def_balance, double int_rate = def_int_rate);
    bool deposit(double amount);
    //inherits the Account withdraw method 

};

#endif // _SAVINGS_ACCOUNT_H_
