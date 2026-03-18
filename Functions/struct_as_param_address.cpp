#include <iostream>
#include <stdio.h>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

void fun(struct Rectangle *r1){
    r1->length = 20;
    cout<<(r1->length)<<endl<<(r1->breadth);
}

int main(){
    struct Rectangle r = {99, 105};
    printf("length = %d and breadth = %d\n", r.length, r.breadth);
    fun(&r);
    return 0;
}