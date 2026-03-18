#include <iostream>
using namespace std;

void change(int &x, int &y){
    int temp;
    temp = x;
    x = y;
    y = temp;
}

int main(){
    int a = 10;
    int b = 20;
    cout<<a<<" "<<b<<endl;
    change(a, b);
    cout<<a<<" "<<b<<endl;
    return 0;
}