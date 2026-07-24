#include <iostream>
#include <string>
using namespace std;

class shape{// abstract class
    virtual void draw() = 0; // pure virutal function
};

class circle: public shape{
public:
    void draw(){
        cout<<"Drawing circle\n";
    }
};

int main(){
circle c1;
c1.draw();
return 0;
}