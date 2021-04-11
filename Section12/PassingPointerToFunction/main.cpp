#include <iostream>
#include <vector>
using namespace std;

template <typename T>
T min(T a, T b)
{
    return a<b?a:b;
}

class Point
{
private:
    double x;
    double y;
public:
    Point ( double& x, double&y)
    {
        this->x = x;
        this->y =y;
    }
    bool operator <(Point b)
    {
        double dist1 =sqrt(x*x +y*y);
        
    }
}
int main()
{
    vector<int> arr ={10, 20, 30, 40, 50, -1};
    cout<<&arr<<endl;
    display(&arr,-1);
    
    return 0;
}