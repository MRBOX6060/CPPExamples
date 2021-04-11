#include "Mystring.h"
#include <iostream>
#include <cstring>

Mystring::Mystring():str{nullptr}
{
    str=new char[1];
    *str='\0';
}
//overloaded constructor
Mystring::Mystring(const char *s):str{nullptr}
{
    if(s==nullptr)
    {
        str=new char[1];
        *str = '\0';
    }
    else
    {
        str=new char[std::strlen(s)+1];
        std::strcpy(str,s);
    }
}
// copy constructor
Mystring::Mystring(const Mystring &source):str{nullptr}
{
    if(source.str == nullptr)
    {
        str = new char[1];
        *str = '\0';
    }
    else
    {
        str = new char[std::strlen(source.str)+1];
        std::strcpy(str,source.str);
    }
}
//Deconstructor
Mystring::~Mystring()
{
    delete[] str;
}
//Display mystring
void Mystring::display() const
{
    std::cout<<str<<" ; "<<get_length()<<std::endl;
}
// get length
int Mystring::get_length() const
{
    return (std::strlen(str));
}
const char *Mystring::get_str()const
{
    return str;
}
