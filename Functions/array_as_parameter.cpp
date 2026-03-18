#include <iostream>
using namespace std;

void fun(int a[], int n){
    for(int i = 0; i < n; i++){
        cout<<a[i]<<" ";
    }
}

int main(){
    int arr[] = {23, 99, 100, 75, 43};
    fun(arr, sizeof(arr)/sizeof(int)); 
    return 0;
}