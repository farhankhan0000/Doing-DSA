#include <iostream>
using namespace std;

int decTObinary(int decNum){
    int ans = 0, pow = 1;

    while(decNum > 0){
        int rem = decNum % 2;
        decNum = decNum/2;
        ans += rem * pow;
        pow = 10 * pow;
    }
    return ans;
}

int main(){
    int decnumber;
    cout<<"Enter the decimal number: ";
    cin>>decnumber;
    int binary = decTObinary(decnumber);
    cout<<binary<<endl;
    return 0;
}