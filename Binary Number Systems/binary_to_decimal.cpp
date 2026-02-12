#include <iostream>
using namespace std;

int binTodec(int binNum){
    int pow = 1;
    int num = 0;
    while(binNum > 0){
    int rem = binNum % 10;
    binNum = binNum / 10;
    num += rem * pow;
    pow = pow * 2;
    }
    return num;
}

int main(){
    int binNum;
    cout<<"Enter the binary number: ";
    cin>>binNum;
    int decimal_number = binTodec(binNum);
    cout<<decimal_number<<endl;
}