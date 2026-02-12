//to find out if a character is lowercase or uppercase

#include <iostream>
using namespace std;

int main(){
    char ch;
    cout<<"Enter your character: \n";
    cin>>ch;
    if(ch >= 'a' && ch <= 'z'){
        cout<<"small\n";
    }else{
        cout<<"Capital\n";
    }
}