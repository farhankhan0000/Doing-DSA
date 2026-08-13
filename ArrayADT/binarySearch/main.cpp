#include <iostream>
using namespace std;


int binarySearch(int arr[], int L, int H, int key){
    while(L <= H){
        int mid = (L+H)/2;
        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid] < key){
            L = mid+1;
        }
        else{
            H = mid-1;
        }
    }
    return -1;
}

int main(){
    int size;
    cout<<"Enter the size of  the array\n ";
    cin>>size;
    int* A;
    A = new int[size];
    int length;
    cout<<"Enter the total number of elements\n ";
    cin>> length;
    cout<<"Enter the elements in the array";
    for (int i = 0; i < length; i++)
    {
        cin>>A[i];
    }
    cout<<binarySearch(A, 0, length-1, 5);
    
}