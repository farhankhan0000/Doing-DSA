#include <iostream>
using namespace std;

struct Rectangle{
    int length;
    int breadth;
};

void fun(struct Rectangle r1){
    r1.length = 20;
    cout<<"Length"<<r1.length<<endl<<"Breadth"<<r1.breadth<<endl;
}

int main(){
    struct Rectangle r = {10, 20};
    fun(r);
    cout<<"length = "<<r.length<<"and breadth = "<<r.breadth<<endl;
    return 0;
}