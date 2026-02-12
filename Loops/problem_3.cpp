// check if a number is prime or not
#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n: \n";
    cin>>n;
    int i = 2;
    if(n <= 1 ){
        cout<<"it is not prime";
        return 0;
    }

    if(n == 2){
        cout<<"it is prime";
        return 0;
    }

    bool prime = true;
    while(i * i <= n){
        if(n % i == 0){
            prime = false;
            break;
        }
        i++;
    }
    if(prime){
        cout<<"it is prime\n";
    }
    else{
        cout<<"it is not prime\n";
    }
    return 0;
}