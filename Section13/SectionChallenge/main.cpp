#include <iostream>
#include <vector>
#include <string>
#include "Movies.h"

using namespace std;

void add_movie(Movies &movies, string name, string rating, int watched){
    movies.add_movie(name,rating,watched);
}
void display_movies(Movies &movies){
    movies.display_movies();
}
int main()
{
    Movies my_movies;
    add_movie(my_movies,"Titanic","PG",10);
    display_movies(my_movies);
    return 0;
}