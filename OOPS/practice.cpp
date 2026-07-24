#include <iostream>
using namespace std;



int main(){
    int a = 10;
    try{
        throw a;
    }

    catch(int){
        cout<<"success"<<endl;
    }
    return 0;
}