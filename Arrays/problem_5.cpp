#include <iostream>
using namespace std;

void intersection_array(int arr1[], int size1, int arr2[], int size2){
    for (int i = 0; i < size1; i++)
    {
        bool already_printed = false;
        for (int k = 0; k < i; k++)
        {
            if(arr1[k] == arr1[i]){
                already_printed = true;
                break;
            }
        }
        if (already_printed){
            continue;
        }
        
        for (int j = 0; j < size2; j++)
        {
            if(arr1[i] == arr2[j]){
                cout<<arr1[i]<<" ";
                break;
            }
        }   
    }
    cout<<"\n";
    
}

int main(){
    int arr_1[] = {12, 34, 56, 78, 4, 9, 10, 8, 2};
    int size1 = sizeof(arr_1)/sizeof(int);
    int arr_2[] = {23, 55, 56, 4, 12, 7, 1, 0};
    int size2 = sizeof(arr_2)/sizeof(int);
    intersection_array(arr_1, size1, arr_2, size2);
    return 0;
}