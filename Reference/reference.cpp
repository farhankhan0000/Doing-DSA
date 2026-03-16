#include <iostream>
using namespace std;

int main(){
    int a = 10;
    int &r = a;
    cout<<r<<endl;
    int b = 30;
    r = b;
    cout<<a<<endl;
}