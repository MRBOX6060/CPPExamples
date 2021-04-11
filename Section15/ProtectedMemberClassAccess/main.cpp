#include <iostream>
using namespace std;

class Base{
public:
    int a{};
protected:
    int b{};
private:
    int c{};
};

class Derived:public Base{
public:
    void access_base_member(){
     a=3000;  
        b=2000;
    }
    
};
int main()
{
    Base base;
    base.a =1000;
    cout<<base.a<<endl;
    Derived dr;
    dr.a =200;
    cout<<dr.a<<endl;
    dr.access_base_member();
    cout<<dr.a<<endl;
    return 0;
}