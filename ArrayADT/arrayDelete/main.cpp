#include <iostream>
using namespace std;

struct Array
{
    int* A;
    int size;
    int length;
};

int deleteElement(Array &arr, int index){
    int x = 0;
    if(index >= 0 && index < arr.length){
        x = arr.A[index];
        for (int i = index; i < arr.length-1; i++)
        {
            arr.A[i] = arr.A[i+1];
        }
        arr.length--;
        return x;
    }
    return 0;
    
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
    deleteElement(arr,1);
    printArray(arr);

    delete[] arr.A;

    return 0;
    
}