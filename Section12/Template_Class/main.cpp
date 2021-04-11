#include <iostream>
template <class T>
class Bucky
{
private: 
    T first;
    T second;
public:
    Bucky(T a, T b)
    {
      first = a;
      second = b;
    }
    T bigger();
};
template <class T>
T Bucky<T>::bigger()
{
    return(first>second?first:second);
}

int main()
{
    Bucky <double> bo(69,96.6);
    std::cout<<bo.bigger()<<std::endl;
    return 0;
}