#include <iostream>

using namespace std;

int main(){
    int select{0};
    cout<<"Select a option: ";
    cin>>select;
    switch(select)
    {
        case 1: cout<<" 1 seclected"<<endl;
        
        case 2: cout<<" 2 seclected"<<endl;
        
        case 3: cout<<" 3 seclected"<<endl;
        break;
        case 4: cout<<" 4 seclected"<<endl;
        
        case 5: cout<<" 5 seclected"<<endl;
        break;
        default: cout<<"1 2 3 4 5 not selected"<<endl;
    }
    return 0;
}