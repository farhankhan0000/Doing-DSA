#include <iostream>
using namespace std;

int fun(int n){
    if (n > 100){
        return n-10;
    }

    else{
        return fun(fun(n+11));
    }
}

int main(){
    int a;
    cout<<"Enter the value of a";
    cin>>a;
    cout<<fun(a)<<" ";
    return 0;
}