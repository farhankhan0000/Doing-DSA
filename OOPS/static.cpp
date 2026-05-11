#include <iostream>
#include <string>
using namespace std;
// void fun(){
//     static int x = 0;// static only get called once in a lifetime of the program
//     cout<<"x = "<<x<<endl;
//     x++;
// }

// int main(){
//     fun();
//     fun();
//     fun();
//     fun();
//     return 0;
// }

class A{
public:
     int x;

     void incX(){
        x = x + 1;
     }
};

int main(){
    A obj;
    A obj2;
    obj.x = 100;
    obj2.x = 200;
    cout<<" x : "<<obj.x<<endl;
    cout<<" x : "<<obj2.x<<endl;
    return 0;
}