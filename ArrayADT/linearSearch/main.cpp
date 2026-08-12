#include <iostream>
using namespace std;

struct Array
{
    int A[10];
    int size;
    int length;
};

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}



int searchElement(Array arr, int key){
    for (int i = 0; i < arr.length; i++)
    {

        if(arr.A[i] == key){
            return i;
        }
    }
    return -1;
}


int improvedSearchElement(Array &arr, int key){
    for (int i = 0; i < arr.length; i++)
    {
        if(arr.A[i] == key){
            if(i > 0){
            swap(&arr.A[i], &arr.A[i-1]);
            //swap(&arr.A[i], &arr.A[0]);
            return i;
            }
            return 0;  
        }
    }
    return -1;
}

int main(){
    struct Array arr = {{12, 32, 56, 85, 67, 90}, 10, 6};
    cout<<improvedSearchElement(arr, 85)<<endl;
    for (int i = 0; i < arr.length; i++)
    {
        cout << arr.A[i] << " ";
    }
    return 0;

}