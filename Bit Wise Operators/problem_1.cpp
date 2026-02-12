#include <iostream>
using namespace std;

int reverse_num(int num){
    int rev = 0;
    while(num > 0){
        int last_digit= num % 10;
        num = num/10;
        rev = rev * 10 + last_digit;
    }
    return rev;
    
}

int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    reverse_num(n);
    int reversed_number = reverse_num(n);
    cout<<reversed_number<<endl;
    return 0;
}