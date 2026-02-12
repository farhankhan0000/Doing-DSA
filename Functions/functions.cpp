#include <iostream>
using namespace std;
// sum of 2 numbers
int sum(int a, int b){ // parameters
    int s = a + b;
    return s;
}
//min of 2 numbers
void min(int a, int b){ // parameters
    if(a > b){
        cout<<b<<" is minimum";
    }
    else{
        cout<<a<<" is minimum";
    }
}
int main(){
    int my_sum = sum(10, 20); // arguments
    cout<<my_sum<<endl;
    min(30, 40);
    return 0;
}