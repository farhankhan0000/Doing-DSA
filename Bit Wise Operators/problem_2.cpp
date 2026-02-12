// #include <iostream>
// using namespace std;

// void checker(int num){

//     if(num <= 0){
//         cout<<" number is not power of 2";
//         return;
//     }
//     int rem = 0;
//     while(num > 0){
//         rem += num % 2;
//         if(rem > 1){
//             cout<<" number is not power of 2";
//             return;
//         }
//         num = num/2;
//     }
//     if(rem == 1){
//         cout<<"number is power of 2!";
//     }
// }

// int main(){
//     int a;
//     cout<<"Enter the value: ";
//     cin>>a;
//     checker(a);
// }

#include <iostream>
using namespace std;

bool is_power_of_two(int n){
    return n > 0 && ((n & (n-1)) == 0);
}

int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    if(is_power_of_two(num)){
        cout<<num<<" is power of 2\n";
    }
    else{
        cout<<num<<" is not power of 2\n";
    }
    return 0;
}