#include "Movies.h"
#include <vector>
#include <string>
using namespace std;

// overload constructor
Movies::Movies(){
    movies = new Movie(string name,string rating,int watched);
}
// Destructor
Movies::~Movies(){
    
}
bool Movies::add_movie(string name, string rating, int watched){
    // check movie name
    for(const Movie movie: *movies){
        if( movie.get_name() ==name){
            return false;
        }
    }
    Movie temp(name,rating,watched);
    movies->push_back(temp);
    return true;
}

void Movies::display_movies(){
    for(auto movie:*movies){
        movie.display_movie();
    }
}

bool Movies::watched_increment(string name){
    return true;
}