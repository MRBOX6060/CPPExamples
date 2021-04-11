#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Movie{
private:
    string name;
    string rating;
    int watched;
public:
    // methods
    void set_name(string name){this->name = name;}
    string get_name(){return name;}
    //overload constructor
    Movie(string name, string rating, int watched);
    //Copy constructor
    Movie(const Movie &source);
    // Destructor
    ~Movie();
    //Display
    void movie_display();
};
// overload constructor
Movie::Movie(string name, string rating, int watched):name(name),rating(rating),watched(watched){
    
}
// copy constructor
Movie::Movie(const Movie  &source):Movie(source.name,source.rating,source.watched){
    
}
// Destructor
Movie::~Movie(){
    
}
//Display
void Movie::movie_display(){
    cout<<name<<", "<<rating<<", "<<watched<<endl;
}

int main(){
    string name = "Titanic";
    string rating = "*****";
    int watched{1};
    Movie *movie;
    movie = new Movie(name,rating,watched);
    movie->movie_display();
    
    string name1 = "Blood and Sand";
    string rating1 = "*****";
    int watched1{1};
    Movie movie1(name1,rating1,watched1);
    movie1.movie_display();
    
    vector<Movie*> movies;
    
    movies.push_back(movie);
    //movies->push_back(movie1);
    cout<<"Movies-----------------------------------------"<<endl;
    for(Movie *movie : movies){
        movie->movie_display();
    }
    return 0;
}