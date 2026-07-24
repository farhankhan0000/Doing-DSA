#include <iostream>
using namespace std;

int fact(int n){
    if (n == 0){
        return 1;
    }
    return fact(n-1)*n;
}

int nCr(int n, int r){
    int numerator,denominator;
    numerator = fact(n);
    denominator = fact(r) * fact(n-r);
    return numerator/denominator;
}

int NCR(int n, int r){
    if(n == r || r == 0){
        return 1;
    }
    return NCR(n-1, r-1) + NCR(n-1, r);
}


int main(){
    cout<<nCr(10, 5);
    cout<<NCR(10, 5);
    return 0;
}