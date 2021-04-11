#include <iostream>
#include <cstdint>
#include <stdint.h>
//using namespace std;

int main()
{
    float LastValidateCounter = 1.0e-8;
    float l_counter = 0.335544;
    //std::cout<<"Enter your favorite number between 1 to 100"<< std::endl;
    //std::cin>> LastValidateCounter;
    //std::cin>> l_counter;
    float result;
    result = static_cast<float>(l_counter/LastValidateCounter);
    std::cout<<"Amazing! That's my favorite number too: "<<unsigned(result)<<std::endl;
    return 0;
}