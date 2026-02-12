#include <iostream>
using namespace std;

void check_prime(int n){
    int prime = 1;
    if(n <= 1){
        prime = 0;
    }
    if(n == 2){
        prime = 1;
    }
    for (int i = 2; i < n; i++)
    {
        if(n % i == 0){
            prime = 0;
            break;
        }
    }

    if(prime){
        cout<<n<<" is prime";
    }
    else{
        cout<<n<<" is not prime";
    }

}

int main(){
   int a;
   cout<<"Enter the value of a: ";
   cin>>a;
   check_prime(a);
}