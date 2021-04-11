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
    
    // Default constructor
    Player();
    Player (string name_val, int health_val, int xp_val);
    
};

Player::Player():name{"None"},health{0},xp{0}{

}

Player::Player (string name_val, int health_val, int xp_val):name{name_val},health{health_val},xp{xp_val}{
    
}
    
int main()
{
    Player CamVan;
    Player DucAnh("Duc Anh",100,20);
    cout<<DucAnh.get_name()<<endl;
    
    return 0;
}