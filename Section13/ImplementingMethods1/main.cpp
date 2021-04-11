#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Account{
    private:
    //attribute
    string name{"Account"};
    double balance{0.0};
    
    public:
    // methods
    // Declared inline
    
    void set_balance(double dal){ balance = dal;}
    double get_balance(){ return balance;}
    
    //methods will be declared outside of the class
    void set_name(string n);
    string get_name();
    bool deposit(double amount);
    bool withdraw(double amount);
    
};
void Account::set_name(string n){
    name = n;
}
string Account::get_name(){
    return name;
}
bool Account::deposit(double amount){
    balance +=amount;
    return true;
}
bool Account::withdraw(double amount){
    if((balance - amount) >=0){
        balance -=amount;
        return true;
    }else 
        return false;
}
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