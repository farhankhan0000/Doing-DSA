#include <iostream>
using namespace std;

struct Rectangle{
    int lenght;
    int breadth;
    char x;
};

int main(){
    struct Rectangle a;
    a.lenght = 5;
    a.breadth = 10;
    cout<<sizeof(a)<<endl;
    cout<<a.lenght<<" "<<a.breadth<<endl;
}