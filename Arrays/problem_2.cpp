#include <iostream>
using namespace std;

int sumofArray(int arr[], int size){
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
    
}

long long productofArray(int arr[], int size){
    long long multi = 1LL;
    for (int i = 0; i < size; i++)
    {
        multi *= arr[i];
    }
    return multi;
    
}
int main(){
    int arr[] = {1, 25, 65, 90, 43, 5, 2, 11, 10};
    int size = sizeof(arr)/sizeof(int);
    cout<<"sum of all numbers of array = "<<sumofArray(arr, size)<<endl;
    cout<<"product of all numbers of arr = "<<productofArray(arr, size)<<endl;
    return 0;
}