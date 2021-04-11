#include <iostream>
using namespace std;
int main()
{
 /*   try{
        int momAge = 40;
        int sonAge = 50;
        if(momAge <sonAge)
        {
            throw 99;
        }
    }catch(int x)
    {
        cout<< "son can not be older than mom ERROR NUMBER: "<< x<< endl;
    }*/
    try{
        int a;
        cout<<"Nhap vao gia tri a: ";
        cin>>a;
        int b;
        cout<<"Nhap vao gia tri a: ";
        cin>>b;
        if(b==0)
            throw 0;
        cout<<" a/b = "<<a/b<<endl;
        
    }catch( int x)
    {
        cout<<" Không thể chia cho 0"<<endl;
    }
}