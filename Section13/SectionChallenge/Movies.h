#ifndef _MOVIES_H_
#define _MOVIES_H_
#include "Movie.h"
#include <vector>
#include <string>

class Movies
{
private:
    std::vector <Movie> *movies;
    
public:
    //overload constructor
    Movies();
    // copy structor
    Movies (const Movies &source);
    //Destructor
    ~Movies();
    // add movie
    bool add_movie(std::string name, std::string rating, int watched);
    // increment watched
    bool watched_increment(std::string name);
    
    void display_movies();

};

#endif // _MOVIES_H_
