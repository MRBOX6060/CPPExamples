#include<iostream>

using namespace std;

int num{1000};
double dayday (int n, double total)
{
    if (n==1)
        return total =0.01;
    else
        return total = 2*dayday(n-1, total);
}

int main()
{
    double total{};
    double a{};
    a=dayday(16,total);
    cout<<a<<endl;
    
    return 0;
}