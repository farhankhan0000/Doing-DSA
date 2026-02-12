#include <iostream>
using namespace std;

int facto(int a){
    if(a < 0){
        return -1;
    }
    if(a == 0 || a == 1){
        return 1;
    }
    return a * facto(a - 1);
}

int ncr(int b, int c){
    return (facto(b))/((facto(c))*facto(b-c));
}

int main(){
    int n,m;
    cout<<"Enter n and m ";
    cin>>n;
    cin>>m;

    int my_ncr = ncr(n,m);
    cout<<" ncr = "<<my_ncr<<endl;

    return 0;
}