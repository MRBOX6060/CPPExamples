#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
   string s1;
   cout<<"Enter your string:";
   getline(cin,s1);
   string s2(s1.length()*2-1, ' ');
   size_t s2_length = s2.length();
   
   for(size_t i{0}; i<s1.length(); ++i){
       int n = s2_length/2;
       int m = s2_length/2;
       s2.at(n) = s1.at(i);
    
       for (int j{i}; j>0; j=j-1){
           s2.at(n-1) = s1.at(j-1);
           --n;
           s2.at(m+1) = s1.at(j-1);
           ++m;
       }
       
       cout<<s2 <<endl;
       for(int a{0}; a < s2_length; a++)
           s2.at(a) = ' ';
   }
    return 0;
}