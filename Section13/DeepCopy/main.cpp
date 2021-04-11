#include <iostream>

using namespace std;

class Deep
{
    // attribute
private:
    int *data;
public:
    //inline methods
    void set_data(int d){*data =d;}
    int get_data(){return *data;}
    // overloaded constructor
    Deep(int d);
    //Copy constructor
    Deep(const Deep &source);
    //Destructor
    ~Deep();
};
Deep::Deep(int d){
    data = new int;
    *data =d;
    cout<<"create new data"<<endl;
}
Deep::Deep(const Deep &source):Deep(*source.data){
    cout<<"Copy data"<<endl;
}
Deep::~Deep(){
    delete data;
    cout<<"delete data"<<endl;
}

void Display_Deep(Deep d){
    cout<<d.get_data()<<endl;
}

int main()
{
    Deep obj1(100);
    Display_Deep(obj1);
    Deep obj2(obj1);
    obj2.set_data(200);
    Display_Deep(obj2);
    return 0;
}