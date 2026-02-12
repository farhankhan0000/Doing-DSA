#include <iostream>
using namespace std;

int main(){
    int marks;
    cout<<"Enter your marks: \n";
    cin>> marks;
    if(marks >= 90 && marks <= 100){
        cout<<"A\n";
    }
    else if(marks >= 80 && marks < 90){
        cout<<"B\n";
    }else{
        cout<<"C\n";
    }
}