#include <iostream>
#include "Mystring.h"

int main()
{
    Mystring a;
    a.display();
    Mystring ducanh("Duc Anh");
    ducanh.display();
    Mystring camvan("Cam Van");
    camvan.display();
    Mystring b=ducanh;
    b.display();
    
    return 0;
    
}