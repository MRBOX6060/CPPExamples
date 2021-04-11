#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Player{
    public:
    // atributes
    string name{"Player"};
    int health{100};
    int xp{3};
    
    //methods
    void talk(string text_to_say){
        cout<< name <<" say "<<text_to_say<<endl;
    }
    bool is_dead();
};

class Account{
    public:
    //attribute
    string name{"Account"};
    double balance{0.0};
    
    // methods
    void deposit(double bal){ balance += bal; cout<<name<<" balance: "<<balance<<endl; }
    void withdraw(double bal){ balance -= bal; cout <<name<<" balance: "<<balance<<endl;}
    
};

int main()
{
    Account frank_account;
    frank_account.name = "Frank's";
    frank_account.balance = 5000.0;
    frank_account.deposit(1000.0);
    frank_account.withdraw(500.0);
    
    
    Player frank;
    frank.name = "Frank";
    frank.health = 90;
    frank.xp = 12;
    frank.talk("Hello there");
    
    Player *enemy = new Player;
    (*enemy).name = "Anh";
    (*enemy).health = 100;
    enemy ->xp = 10;
    enemy ->talk("Hello everyone");
    
    return 0;
}