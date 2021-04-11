#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Movie{
private:
    // attribute
    string name;
    string rating;
    int watched;
public:
    
    // method 
    void set_name(string name){this->name = name;}
    string const get_name(){ return name;}
    
    // constructor
    Movie(string name, string rating, int watched);
    // copy constructor
    Movie(const Movie &source);
    // Destructor
    ~Movie();
    void const display();
};

Movie::Movie(string name, string rating, int watched):name(name),rating(rating),watched(watched){
    
}
Movie::Movie(const Movie &source):Movie(source.name, source.rating, source.watched){
    
}

Movie::~Movie(){
    
}
void const Movie::display(){
    cout<<name<<","<<rating<<","<<watched<<endl;
}

int main()
{
    vector<Movie> movies;
    Movie movie("Titanic", "PG", 10);
    Movie tem("anh", "aa",10);
    movies.push_back(tem);
    //movies.
    
    return 0;
}