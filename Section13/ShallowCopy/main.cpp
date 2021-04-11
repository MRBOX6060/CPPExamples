#include <iostream>
using namespace std;

class Shallow
{
private:
    int *data;
public:
    //inline methods
    void set_data(int d){*data =d;}
    int get_data(){return *data;}
    
    //constructor
    Shallow (int d);
    // copy constructor
    Shallow(const Shallow &source);
    //Destructor
    ~Shallow();
};

Shallow::Shallow(int d){
    data = new int;
    *data =d;
}

Shallow::Shallow(const Shallow &source):data{source.data}{
    cout<<"copy constructor"<<endl;
}
Shallow::~Shallow(){
    delete data;
}
void display_Shallow(Shallow data_val)
{
    cout << data_val.get_data()<<endl;
}
int main()
{
    Shallow obj1{100};
    display_Shallow(obj1);
    Shallow obj2{obj1};
    return 0;
}