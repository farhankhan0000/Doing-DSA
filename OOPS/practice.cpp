#include <iostream>
#include <stdio.h>

using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;
public:
    Rectangle(){length=breadth=1;}
    Rectangle(int l, int b);
    int area();
    int perimeter();
    int getlength(){return length;}
    void setlength(int l){length = l;}
    ~Rectangle();
};

Rectangle::Rectangle(int l, int b){
    length = l;
    breadth = b;
}

int Rectangle::area(){
    return length*breadth;
}

int Rectangle::perimeter(){
    return 2*(length+breadth);
}

Rectangle::~Rectangle(){
    
}



int main(){
    Rectangle r(10, 20);
    printf("area of rectangle = %d\nperimeter of rectangle = %d", r.area(), r.perimeter());
    return 0;
}