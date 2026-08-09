#include <iostream>
using namespace std;

struct Array
{
    int* A;
    int size;
    int length;
};

void insertElement(Array &arr, int index, int num){
    if(index >= 0 && index <= arr.length){
        for (int i = arr.length; i > index; i--)
    {
        arr.A[i] = arr.A[i-1];
    }
    arr.A[index] = num;
    arr.length++;
    }
    
}

void printArray(Array arr){
    for (int i = 0; i < arr.length; i++)
    {
        cout<<arr.A[i]<<endl;
    }
    
}

int main (){
    struct Array arr;
    cout<<"Enter the size of the array \n";
    cin>>arr.size;
    arr.A = new int[arr.size];
    int n;
    cout<<"Enter the number of elements in the array \n";
    cin>>n;
    cout<<"Enter the elements";

    for (int i = 0; i < n; i++)
    {
        cin>>arr.A[i];
    }
    arr.length = n;
    printArray(arr);
    insertElement(arr,4, 15);
    printArray(arr);

    delete[] arr.A;

    return 0;
    
}