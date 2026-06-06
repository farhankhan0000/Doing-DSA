#include <iostream>
using namespace std;

int sum(int n);

int sum(int n){
    if (n > 0){
        return sum(n-1) + n;
    }
    if (n == 0){
        return 0;
    }
}

int main(){
    int a;
    cout<<"Enter the value of a: ";
    cin>>a;
    cout<<sum(a);
    return 0;
}