#include <iostream>
#include <vector>
#include <string.h>
using namespace std;
//using namespace boost;

enum class Color { red, green, blue };
enum class Size { small, medium, large };
struct Product
{
    string name;
    Color color;
    Size size;
};
struct ProductFillter
{
    vector<Product*> by_color (vector<Product*> items, Color color)
    {
        vector<Product*> result;
        for ( auto& i:items)
        {
            if(i->color == color)
                result.push_back(i);
        }
        return result;
    }
};
int main()
{
    Product apple{"Apple", Color::green, Size::small};
    Product tree{"Tree", Color::green, Size::medium};
    Product house{"House", Color::blue, Size::large};
    vector<Product*> items { &apple, &tree, &house };
    ProductFillter pf;
    auto green_things = pf.by_color(items, Color::green);
    for(auto& item: green_things)
        cout<<item->name<<" is green."<<endl;
    
    return 0;
}