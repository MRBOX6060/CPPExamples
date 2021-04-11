#include <iostream>
#include <vector>
//Section16: Pure Virtual fuctions and Abstract Base Class
class Shape{  
    // Abstraction  Base class
private:
// attributes common to all shapes.
public:
    virtual void draw() =0;
    virtual void rotate() =0;
    virtual ~Shape(){}
};

class Open_shape:public Shape{
    // Abstract class
private:
    // attribute common to all open shapes
public:
    virtual ~Open_shape(){}
};

class Close_shape:public Shape{
    // Abstract class
private:
    // attributes common to all close shape
public:
    virtual ~Close_shape(){}
};

class Line:public Open_shape{
    // concrete class
private:
    double length{100};
    double degree{90};
public:
    virtual void draw(){
        std::cout<<"Line::Draw: "<<length<<"mm"<<std::endl;
    }
    virtual void rotate(){
        std::cout<<"Line::Rotate: "<<degree<<"degree"<<std::endl;
    }
    virtual ~Line(){}
};

class Cirle:public Open_shape{
    // concrete class
private:
    double radius{200};
    double degree{45};
public:
    virtual void draw(){
        std::cout<<"Circle::Draw: "<<radius<<"mm"<<std::endl;
    }
    virtual void rotate(){
        std::cout<<"Circle::Rotate: "<<degree<<"degree"<<std::endl;
    }
    virtual ~Cirle(){}
};

class Square:public Open_shape{
    // concrete class
private:
    double width{200};
    double degree{45};
public:
    virtual void draw(){
        std::cout<<"Square::Draw: "<<width<<"mm"<<std::endl;
    }
    virtual void rotate(){
        std::cout<<"Square::Rotate: "<<degree<<"degree"<<std::endl;
    }
    virtual ~Square(){}
};

int main()
{
    std::cout<<"/n===================Pointers==================="<<std::endl;
    Shape* shape = new Line();
    shape->draw();
    shape->rotate();
    
    std::cout<<"/n===================Vector====================="<<std::endl;
    Shape* s1 = new Line();
    Shape* s2 = new Cirle();
    Shape* s3 = new Square();
    
    std::vector <Shape*> shapes{s1,s2,s3};
    for(auto shape : shapes){
        shape->draw();
        shape->rotate();
    }
    delete shape;
    delete s1;
    delete s2;
    delete s3;
    return 0;
}