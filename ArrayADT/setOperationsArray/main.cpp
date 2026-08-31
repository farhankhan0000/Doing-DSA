#include <iostream>
using namespace std;

struct Array
{
    int *A;
    int size;
    int length;
};

void setUniouUnsorted(struct Array *arr1, struct Array *arr2, struct Array *arr3){
    for (int i = 0; i < arr1->length; i++)
    {
        arr3->A[i] = arr1->A[i];
    }
    int j  = arr1->length + 1;
    for (int i = 0; i < arr1->length; i++)
    {
        if(arr1->A[i] != arr2->A[i]){
            arr3->A[j] = arr2->A[i];
            j++;
        }
    }    

}

void setUnionSorted(struct Array *arr1, struct Array *arr2, struct Array *arr3){
    int i = 0;
    int j = 0;
    int k = 0;
    while(i < arr1->length && j < arr2->length){
        if(arr1->A[i] < arr2->A[j]){
            arr3->A[k++] = arr1->A[i++];
        }
        else if(arr1->A[i] == arr2->A[j]){
            i++;
            j++;
        }
        else{
            arr3->A[k++] = arr1->A[j++];
        }
    }
    
    
}


int main(){

}