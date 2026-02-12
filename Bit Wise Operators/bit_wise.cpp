#include <iostream>
using namespace std;

int main(){
    int a;
    cout<<"Enter a: ";
    cin>>a;
    int b;
    cout<<"Enter b: ";
    cin>>b;

    cout<<(a&b)<<endl;
    cout<<(a|b)<<endl;
    cout<<(a^b)<<endl;
    cout<<(10<<2)<<endl;
    cout<<(10>>1)<<endl;
    cout<<(8>>2)<<endl;
    return 0;
}          