#include <iostream>
using namespace std;

int search(int arr[], int size, int target){
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target){
            return i;
        }
        return -1;
    }
    
}

int main(){
    int arr[] = {8, 5, 99, 100, 54, 74, 61, 69, 99};
    int target = 8;
    int size = sizeof(arr)/sizeof(int);
    cout<<search(arr, size, target)<<endl;
    
}