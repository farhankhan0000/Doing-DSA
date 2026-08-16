#include <iostream>
using namespace std;

void reverseArray(struct Array *arr, struct Array * Arr){
    for (int i = 0,j = arr->length -1; i < j; i++, j--)
    {
        Arr->A[i] = arr->A[j];
    }
    
    for (int i = 0; i < arr->length; i++)
    {
        arr->A[i] = Arr->A[i];
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