#include <iostream>
using namespace std;

struct Array
{
    int* A;
    int size;
    int length;
};

void insertElement(struct Array arr, int num){
    int index = 4;
    for (int i = arr.length; i < index; i--)
    {
        arr.A[i] = arr.A[i-1];
    }
    arr.A[index] = num;
}

void printArray(struct Array arr){
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

    for (int i = 0; i < n; i++)
    {
        cin>>arr.A[i];
    }
    arr.length = n;
    insertElement(arr, 15);
    printArray(arr);

    return 0;
    
}