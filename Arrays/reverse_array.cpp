#include <iostream>
using namespace std;

int reverse_array(int arr[], int size){
    for (int i = 0; i < size/2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - 1 - i] = temp;
    }
    return 0;
}

int main(){
    int arr[] = {1, 2, 3};
    reverse_array(arr, 3);
    for (int i = 0; i < 3; i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}