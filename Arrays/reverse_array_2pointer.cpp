#include <iostream>
using namespace std;

int rev_ar(int arr[], int size){
    int start = 0;
    int end = size - 1;
    while(start < end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    rev_ar(arr, 5);
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0; 
}