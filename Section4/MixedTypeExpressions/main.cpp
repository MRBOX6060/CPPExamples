#include <iostream>

using namespace std;

int main()
{
    const int a{100};
    const int b{6};
    double result{0};
    double result1{0};
    result=a/b;
    cout<<result<<endl;
    result1= static_cast<double>(a)/b;
    //result1= (double)a/b; dung trong ngon ngu c;
    cout<<result1<<endl;
    
    return 0;
    
}