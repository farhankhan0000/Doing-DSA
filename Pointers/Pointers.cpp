#include <iostream>
using namespace std;

int main(){
    // int a;
    // a = 10;
    // int *p;
    // p = &a;
    // cout<<a<<endl;
    // cout<<*&a<<endl;
    // cout<<*p<<endl;
    // cout<<p<<endl;
    // cout<<&a<<endl;
    int a[5] = {2, 4, 6, 8, 10};
    int* p;
    // p = a;
    p = &a[0];
    for (int i = 0; i < 5; i++)
    {
        // cout<<*p<<endl;
        // p++;
        cout<<p[i]<<endl;
    }
    
    return 0;
}