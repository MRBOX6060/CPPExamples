#include <iostream>

using namespace std;
extern int x;
int main()
{
    /*int x,y;
    cout<<"Nhap x: ";
    cin>>x;
    cout<< "Nhap y: ";
    cin>>y;
    cout<<"X la: "<<x<<"  Y la:"<<y<<endl;*/
    int arr[10]{1:5};
    for(int i{0};i<10;i++)
        cout<<arr[i];
        
  
    return 0;
}