#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Move
{
private:
    int *data;
public:
    void set_data(int d){*data = d;}
    
    // constructor
    Move(int d);
    //copy constructor
    Move(const Move &source);
    //Move constructor
    Move(Move &&source)noexcept;
    //Destructor
    ~Move();
    
};

Move::Move(int d){
    data = new int;
    *data = d;
    cout<<"Create new data on Heap"<<endl;
}
// Copy constructor
Move::Move(const Move &source):Move(*source.data){
    cout<<"Copy constructor"<<endl;
}
//Move constructor
Move::Move(Move &&source)noexcept:data(source.data){
    cout<<"Move constructor for: "<<*data<<endl;
    source.data = nullptr;
}
// Destructor
Move::~Move(){
    if(data != nullptr){
        cout<<"Destructor freeing data for: "<<*data<<endl;
    }else
        cout<<"Destructor freeing data for nullptr"<<endl;
    delete data;
        
}
int main()
{
    vector<Move> obj1;
    obj1.push_back(Move{10});
    obj1.push_back(Move{20});
    obj1.push_back(Move{30});
    
    Move obj2(100);
    Move obj3(obj2);
    return 0;
}