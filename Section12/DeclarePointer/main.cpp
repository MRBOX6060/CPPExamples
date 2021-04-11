#include <iostream>

using namespace std;

int main()
{
    int  new a{10};
    int *p{nullptr};
    p = &a;
    cout<<p<<endl;
    cout<<*p<<endl;
    return 0;
}