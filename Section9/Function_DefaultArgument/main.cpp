#include <iostream>
#include <cmath>

using namespace std;

double calc_cost(double base_cost = 1000.0, double tax_rate = 0.1, double shipping = 3.5);
double calc_cost(double base_cost, double tax_rate, double shipping)
{
    return base_cost += base_cost*tax_rate + shipping;
}

int main()
{
    double cost{0};
    cost = calc_cost(1000.0);
    cout <<cost<<endl;
    cost = calc_cost(1000.0, 0.05);
    cout <<cost<<endl;
    cost = calc_cost(1000.0, 0.05, 4.5);
    cout <<cost<<endl;
    cost = calc_cost( , ,5.5); 
    cout<<cost<<endl;
    return 0;
}