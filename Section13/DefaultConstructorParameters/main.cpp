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
    int get_health(){return health;}
    int get_xp(){return xp;}
    
    // overloaded constructor
    Player (string name_val = "None", int health_val = 0, int xp_val =0);
    // copy constructor
    Player(const Player &source);
    // Deconstructor
    ~Player(){
        cout<<"Deconstructor called for: "<<name<<endl;
    }
};

Player::Player(string name_val, int health_val, int xp_val):name{name_val}, health{health_val},xp{xp_val}{
    cout<<"Three args called for: "<<name<<endl;
}
Player::Player(const Player &source) :name{source.name}, health{source.health}, xp{source.xp}{
    cout<<"Copy constructor called for: "<<name<<endl;
}

void Display_player(Player P)
{
    cout<<"Player_name: "<<P.get_name()<<endl;
    cout<<"Player_health: "<<P.get_health()<<endl;
    cout<<"Player_xp: "<<P.get_xp()<<endl;
}
    
int main()
{
    Player CamVan("Cam Van", 150,30);
    
    Player CamVan1{CamVan};
    
    Display_player(CamVan);
    Display_player(CamVan1);
    
    Player dr_van("Dr.Van");
    Player DucAnh("Duc Anh",100,20);
    
    return 0;
}