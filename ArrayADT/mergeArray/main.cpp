#include <iostream>
using namespace std;

struct Array
{
    int *A;
    int length;
    int size;
};

int main(){
    struct Array arr1;
    struct Array arr2;
    struct Array arr3;
    int size;
    cout<<"Enter the size of first and second array\n";
    cin>>size;
    arr1.A = new int[size];
    arr2.A = new int[size];
    int size2;
    cout<<"Enter the size of third array\n";
    cin>>size2;
    arr3.A = new int[size2];
    arr1.length = 4;
    arr2.length = 4;
    arr3.length = 8;
    for (int i = 0; i < arr1.length; i++)
    {
        cin>>arr1.A[i];
    }
    for (int i = 0; i < arr2.length; i++)
    {
        cin>>arr2.A[i];
    }
    for (int i = 0; i < arr3.length; i++)
    {
        cin>>arr3.A[i];
    }

    int i = 0,j = 0,k = 0;
    while (i < arr1.length && j < arr2.length)
    {
        if(arr1.A[i] < arr2.A[j]){
            arr3.A[k++] = arr1.A[i++];
        }
        else{
           arr3.A[k++] = arr2.A[j++]; 
        }
    }
    while (i < arr1.length)
    {
        arr3.A[k++] = arr1.A[i++];
    }
    while (j < arr2.length){
        arr3.A[k++] = arr2.A[j++];
    }
    for (int i = 0; i < arr3.length; i++)
    {
        cout<<arr3.A[i]<<endl;
    }
    return 0;
    
}