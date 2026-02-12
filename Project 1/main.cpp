#include <iostream>
using namespace std;

int main(){
    int a, b;
    cout<<"Enter a: ";
    cin>> a;
    cout<<"Enter b: ";
    cin>> b;
    int sum = a + b;
    int product = a * b;
    int difference = a - b;
    int divide = a / b;
    int modulo = a % b;
    cout<< "sum is = " <<(sum)<<endl;
    cout<< "product is = " <<(product)<<endl;
    cout<< "difference is = " <<(difference)<<endl;
    cout<<"divide is = " <<(divide)<<endl;
    cout<<"modulo is = " <<(modulo)<<endl;
}