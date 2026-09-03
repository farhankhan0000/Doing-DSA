#include <iostream>
using namespace std;

struct Array
{
    int *A;
    int size;
    int length;
};

void setUniouUnsorted(struct Array *arr1, struct Array *arr2, struct Array *arr3){
    int k = 0;
    for (int i = 0; i < arr1->length; i++)
    {
        arr3->A[k++] = arr1->A[i];
    }
    for (int i = 0; i < arr2->length; i++)
    {
        bool found = false;
        for (int j = 0; j < arr1->length; j++)
        {
            if(arr2->A[i] == arr1->A[j]){
                
                found = true;
                break;
            }
        }
        if(!found){
            arr3->A[k++] = arr2->A[i];
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
            arr3->A[k++] = arr1->A[i++];
            j++;
        }
        else{
            arr3->A[k++] = arr2->A[j++];
        }
    }
    while(i < arr1->length){
        arr3->A[k++] = arr1->A[i++];
    }
    while(j < arr2->length){
        arr3->A[k++] = arr2->A[j++];
    }
}

void setIntersection(struct Array *arr1, struct Array *arr2, struct Array *arr3){
    int i = 0;
    int j = 0;
    int k = 0;

    while(i < arr1->length && j < arr2->length){
        if(arr1->A[i] < arr2->A[j]){
            i++;
        }
        else if(arr1->A[i] == arr2->A[j]){
            arr3->A[k++] = arr1->A[i++];
            j++;
        }
        else{
            j++;
        }
    }
    
}

void setIntersectionUnsorted(struct Array *arr1, struct Array *arr2, struct Array *arr3){
    int k = 0;
    for (int i = 0; i < arr1->length; i++)
    {
        for (int j = 0; j < arr2->length; j++)
        {
            if(arr1->A[i] == arr2->A[j]){
                arr3->A[k++] = arr2->A[j];
                break;
            }
        }
        
    }
    
}


int main(){

}