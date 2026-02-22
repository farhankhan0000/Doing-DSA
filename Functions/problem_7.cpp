#include <iostream>
using namespace std;

int reverse_num(int num){
    int new_num = 0;
    while (num > 0)
    {
        int last_digit = num % 10;
        num = num/10;
        new_num = new_num * 10 + last_digit;
    }
    return new_num;
    
}

int main(){
    int num;
    cout<<"Enter the number which you want to reverse";
    cin>>num;
    int new_number = reverse_num(num);
    cout<<new_number<<endl;
    if(num == new_number){
        cout<<"the number is palindrome";
    }
    else{
        cout<<"the number is not palindrome";
    }
    return 0;
}