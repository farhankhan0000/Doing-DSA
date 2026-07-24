#include <iostream>
#include <string>
using namespace std;

class Shape{
    public:
        virtual void shape() = 0;
};

class Circle: public Shape{
    public: 
    virtual void shape(){
        cout<<"Circle shape";
    }
};

int main(){
    Circle c;
    c.shape();
}