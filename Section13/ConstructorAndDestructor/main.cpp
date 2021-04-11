#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Player
{
    //attribute
private:
    string name;
    int health;
    int xp;
public:
    void set_name(string n){ name=n;}
    
    //overloaded constructors
    Player(){
        cout<<"No argument contructor called"<<endl;
    }
    Player( string name){
        cout<<"String argument constructor called"<<endl;
    }
    Player(string name, int health, int xp){
        cout<<"Three arguments constructor called"<<endl;
    }
    
    ~ Player(){
        cout<<"Deconstructor called for: " <<name<<endl;
    }
};
int main()
{
    {
        Player slayer;
        slayer.set_name("Slayer");
    }
    {
        Player frank;
        frank.set_name("Frank");
        
        Player hero("Hero");
        hero.set_name("Hero");
        
        Player valian("Valian", 100, 12);
        valian.set_name("Valian");
    }
    Player *enemy = new Player;
    enemy ->set_name("Enemy");
    
    Player *level_Boss = new Player("Boss", 100,15);
    level_Boss ->set_name("Boss");
    
    delete level_Boss;
    delete enemy;
    
    return 0;
}