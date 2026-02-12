#include <iostream>
using namespace std;

int main(){
    int n;
    cout<< "Enter your age: \n";
    cin>> n;
    if(n >= 18){
        cout<< "you can vote\n";
    } else{
        cout<< "you cannot vote\n";
    }
    return 0;
}