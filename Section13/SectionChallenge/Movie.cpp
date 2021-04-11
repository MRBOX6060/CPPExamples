#include <iostream>
#include "Movie.h"

// constructor
Movie::Movie(std::string name, std::string rating, int watched)
:name(name),rating(rating),watched(watched){

}
// copy constructor
Movie::Movie(const Movie &source):Movie(source.name,source.rating,source.watched){
    
}
//Destructor
Movie::~Movie(){
    
}
void const Movie::display_movie(){
    std::cout<<name<<","<<rating<<","<<watched<< std::endl;
}