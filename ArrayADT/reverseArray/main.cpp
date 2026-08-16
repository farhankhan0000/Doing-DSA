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

void reverseArray(struct Array *arr){
    for (int i = 0; i < (arr->length)/2; i++)
    {
        int temp = arr->A[i];
        arr->A[i] = arr->A[arr->length-i-1];
        arr->A[arr->length-i-1] = temp;
    }
    
}

struct Array
{
    int A[10];
    int size;
    int length;
};


int main(){

}