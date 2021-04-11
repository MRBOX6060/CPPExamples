#include <iostream>
#include <string>
#include <cstring>

using namespace std;
int main()
{
    string alphabet1 {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key       {"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};
    string secrret_message;
    string convert_secrret_message{};
    cout<<"Enter your secrret message: ";
    getline(cin,secrret_message);
    cout<<secrret_message<<endl;
        
    
    for (int i{0}; i<secrret_message.length(); ++i)
    {
        for(size_t j{0}; j < alphabet1.length(); ++j)
        {
            if ( secrret_message.at(i) == alphabet1.at(j))
            {
                char c {key.at(j)};
                convert_secrret_message += c;
                break;
            }
        }
        
    }
    cout<<convert_secrret_message<<endl; 
    system("pause");
    
    return 0;
}