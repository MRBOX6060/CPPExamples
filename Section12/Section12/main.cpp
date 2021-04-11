#include <iostream>

using namespace std;

int main()
{
    int *array_ptr{nullptr};
    array_ptr = new int[9]{1,5,9,4,5,6,7,8};
    cout<<array_ptr<<endl;
    cout<<"value0:"<<*array_ptr<<endl;
    cout<<array_ptr +1<<endl;
    cout<<"value1:"<<*(array_ptr+1)<<endl;
    cout<<array_ptr +2<<endl;
    cout<<"value2:"<<*(array_ptr+2)<<endl;
    cout<<"------------------------------------"<<endl;
    cout<<array_ptr[2]<<endl;
    cout<<"compare array_ptr[2] with *(array_ptr+2): "<<endl;
    cout<<(array_ptr[2]==*(array_ptr+2))<<endl;
    
    
    delete [] array_ptr;
    cout<<"after delete: "<<endl;
    cout<<array_ptr<<endl;
    *array_ptr =10;
    cout<<"value0:"<<*array_ptr<<endl;
    return 0;
}