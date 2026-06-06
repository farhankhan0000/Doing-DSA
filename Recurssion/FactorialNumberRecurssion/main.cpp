#include <iostream>
using namespace std;

int facto(int n);

int facto(int n){
    if (n == 0){
        return 1;
    }
    if (n > 0){
        return n * facto(n - 1);
    }
}

int main(){
    int a;
    cout<<"Enter the value of a: ";
    cin>>a;
    cout<<facto(a);
    return 0;
}