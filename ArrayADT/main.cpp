#include <stdio.h>
#include <iostream>
using namespace std;

struct Array
{
    int *A;
    int size;
    int length;
};

void Display (struct Array arr){
    int i;
    cout<<"Elements are \n";
    for (i = 0; i < arr.length; i++)
    {
        cout<<arr.A[i];
    }
    
}



int main(){
    struct Array arr;
    cout<<"Enter size of an array\n";
    cin>>arr.size;
    arr.A = new int[arr.size];
    arr.length = 0;
    int i,n;
    cout<<"Enter the number of elements you want to put";
    cin>>n;
    cout<<"Enter all elements";
    for ( i = 0; i < n; i++)
    {
        cin >> arr.A[i];
    }
    arr.length = n;
    Display(arr);

}