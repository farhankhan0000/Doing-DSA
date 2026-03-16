#include <iostream>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};


int main(){
    Rectangle r = {5, 10};
    cout<<r.length<<endl;
    cout<<r.breadth<<endl;
    Rectangle *p = &r;
    cout<<p->length<<endl;
    cout<<p->breadth<<endl;
    return 0;
}