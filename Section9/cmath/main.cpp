#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double total{102.4555};
    double t = floor(total);
    cout<<t<<endl;
    double t1 = ceil(total);
    cout<<t1<<endl;
    double t2 = round(total);
    cout<<t2<<endl;
    return 0;
}