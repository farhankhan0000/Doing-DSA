// 0 1 1 2 3 5 8 13 21 34 55 89 144


#include <iostream>
using namespace std;

int feb(int n){
    if(n == 1 || n == 2){
        return n - 1;
    }
    return feb(n-1) + feb(n-2);
}

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    cout<<feb(n)<<endl;
    return 0;
}