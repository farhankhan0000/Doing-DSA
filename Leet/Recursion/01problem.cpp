#include <iostream>
using namespace std;

// bool isPower(int n){
//     if(n <= 0){
//         return false;
//     }
//     if(n == 1){
//         return true; 
//     }
//     while(n > 1){
//             if(n%2 != 0){
//                 return false;
//             }
//             n = n/2;
//     }
//     return true;
// }

bool isPower(int n){
    if(n == 1){
        return true;
    }
    if(n <= 0 || n % 2 != 0){
        return false;
    }
    return isPower(n/2);
}

int main(){
    cout<<isPower(3);
    return 0;
}