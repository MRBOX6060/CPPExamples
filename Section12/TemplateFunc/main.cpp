#include <iostream>
#include <math.h>

template<typename T>
const T min(T& a,T& b)
{
    return a<b?a:b;
};
class Point
{
private:
    
public:
    double x;
    double y;
    Point(double x, double y)
    {
        this->x =x;
        this->y =y;
    }
    const bool operator <(const Point& b)
    {
        double dist1 =sqrt(x*x+y*y);
        double dist2 =sqrt(b.x*b.x+b.y*b.y);
        return dist1 < dist2;
    }
};
int main()
{
    Point p1(10.2,100.5);
    Point p2(40.2,50.4);
    Point smaller = min(p1,p2);
    std::cout<<smaller.x <<std::endl;
    std::cout<<smaller.y <<std::endl;
    return 0;
}