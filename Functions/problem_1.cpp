#include <iostream>
using namespace std;

int sum(int n){
    if(n <= 1){
        return n;
    }
    return n + sum(n - 1);
}
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int a = sum(n);
    cout<<a<<endl;
    return 0;
    
}