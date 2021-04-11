#include <iostream>
#include <string>
using namespace std;

class Player
{
private:
    //attribute
    string name;
    int health;
    int xp;
    
public:
    //methods
    void set_name(string n){ name =n;}
    string get_name(){return name;}
    
    // overloaded constructor
    Player (string name_val, int health_val, int xp_val);
    Player(string name_val);
    Player();
    
};

Player::Player (string name_val, int health_val, int xp_val):name{name_val},health{health_val},xp{xp_val}{    
   cout<<"Three args constructor"<<endl;
}

Player::Player(string name_val):Player(name_val,0,0){
    cout<<"One args constructor"<<endl;
}

Player::Player():Player("None",0,0){
    cout<<"No agrs constructor"<<endl;
}

    
int main()
{
    Player CamVan;
    Player dr_van("Dr.Van");
    Player DucAnh("Duc Anh",100,20);
    
    return 0;
}