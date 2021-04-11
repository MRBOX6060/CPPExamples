#ifndef _MOVIE_H_
#define _MOVIE_H_

#include <iostream>
#include <string>

class Movie
{
private:
    // attribute
    std::string name;
    std::string rating;
    int watched;
    
public:
    // Methods
    void set_name(std::string name){this->name = name;}
    std::string get_name() const {return name;}
    
    void set_rating(std::string rating){this->rating = rating;}
    std::string get_rating() const{return rating;}
    
    void set_watched(int watched){this->watched = watched;}
    int get_watched() const { return watched;}
    
    // constructor
    Movie(std::string name, std::string rating, int watched);
    
    // copy construntor
    Movie ( const Movie &source);
    
    //Destructor
    ~Movie();
    
    // watched increment
    int watched_increment(){return ++watched;}
    //Display movie
    void const display_movie();

};

#endif // _MOVIE_H_
