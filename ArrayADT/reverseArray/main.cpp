#include <iostream>
using namespace std;

// void reverseArray(struct Array *arr, struct Array * Arr){
//     for (int i = 0,j = arr->length -1; i < arr->length; i++, j--)
//     {
//         Arr->A[i] = arr->A[j];
//     }
    
//     for (int i = 0; i < arr->length; i++)
//     {
//         arr->A[i] = Arr->A[i];
//     }
    
// }

// void reverseArray(struct Array *arr){
//     for (int i = 0,j=arr->length-1; i < j; i++,j--)
//     {
//         int temp = arr->A[i];
//         arr->A[i] = arr->A[j];
//         arr->A[j] = temp;
//     }
    
// }

struct Array
{
    int A[10];
    int size;
    int length;
};

void reverseArray(struct Array *arr){
    for (int i = 0; i < (arr->length)/2; i++)
    {
        int temp = arr->A[i];
        arr->A[i] = arr->A[arr->length-i-1];
        arr->A[arr->length-i-1] = temp;
    }
    
}



int main(){
    struct Array arr = {{1,2,3,4,5,6,7,8,9,10}, 10, 10};
    reverseArray(&arr);
    for (int i = 0; i < arr.length; i++)
    {
        cout<<arr.A[i]<<endl;
    }
    return 0;
    
}