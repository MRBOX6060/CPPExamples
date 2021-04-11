#include <iostream>
using namespace std;

class Base{
private:
    int value;
public:
    Base():value{0}{cout<<"Base constructor no_args called"<<endl;}
    Base(int x):value{x}{cout<<"Base constructor one-args called"<<endl;}
    ~Base(){cout<<"Base Destructor called"<<endl;}    
};
class Derived:public Base{
    using Base::Base;
private:
    int double_value;
public:
    Derived():double_value{0}{cout<<"Derived no-args called"<<endl;}
    Derived(int x):double_value{2*x}{cout<<"Derived one-args called"<<endl;}
    ~Derived(){cout<<"Derived Destructor called"<<endl;}
};

int main()
{
    //Base a(1000);
    Derived d(2000);
    return 0;
}