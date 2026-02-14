#include <iostream>
using namespace std;

void all_unique(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        bool is_unique = true;
        for (int j = 0; j < size; j++)
        {
            if(i == j){
                continue;
            }
            if(arr[i] == arr[j]){
                is_unique = false;
                break;
            }
        }
        if (is_unique){
            cout<<arr[i]<<" ";
        }
        
    }
    cout<<"\n";
}

int main(){
    int arr[] = {2, 2, 34, 5, 6, 6, 8, 9};
    int size = sizeof(arr)/sizeof(int);
    all_unique(arr, size);
}