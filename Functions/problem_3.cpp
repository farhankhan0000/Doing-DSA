#include <iostream>
using namespace std;

int digitSum(int n){
    int digit_sum = 0;
    while(n > 0){
        digit_sum += n % 10;
        n = n/10;
    }
    return digit_sum;
}

int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    cout<<"sum of digits of n = "<<digitSum(n)<<endl;
    return 0;
}