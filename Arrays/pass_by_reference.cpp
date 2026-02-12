#include <iostream>
using namespace std;

void changeArr(int arr[], int size){
    cout<<"in function\n";
    for (int i = 0; i < size; i++)
    {
        arr[i] = 2*arr[i];
    }
    
}

int main(){
    int arr[] = {11, 22, 33};
    changeArr(arr, 3);
    cout<<"in main\n";
    for (int i = 0; i < sizeof(arr)/sizeof(int); i++)
    {
        cout<<arr[i]<<"\n";
    }
    
    return 0;
}