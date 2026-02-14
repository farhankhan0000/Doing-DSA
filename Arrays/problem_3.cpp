#include <iostream>
#include <climits>
using namespace std;

void swapping(int arr[], int size){
    int largest = INT_MIN;
    int smallest = INT_MAX;
    int index_for_largest = 0;
    int index_for_smallest = 0;
    for (int i = 0; i < size; i++)
    {
        if(arr[i] > largest){
            largest = arr[i];
            index_for_largest = i;
        }

        if(arr[i] < smallest){
            smallest = arr[i];
            index_for_smallest = i;
        }
    }
    swap(arr[index_for_largest], arr[index_for_smallest]);
}

int main(){
    int arr[] = {12, 14, 70, 80, 90, 100, 200, 150};
    int size = sizeof(arr)/sizeof(int);
    swapping(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}