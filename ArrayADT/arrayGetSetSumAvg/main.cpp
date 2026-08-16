#include <iostream>
using namespace std;

int get_max(int arr[], int length){
    int max = arr[0];
    for (int i = 0; i < length; i++)
    {
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}

int get_min(int arr[], int length){
    int min = arr[0];
    for (int i = 0; i < length; i++)
    {
        if(arr[i] < min){
            min = arr[i];
        }
    }
    return min;
}

int get_element(int arr[],int index,  int length){
    if(index >= 0 && index < length){
        return arr[index];
    }
    return -1;
}

void set_element(int arr[], int index, int length, int element){
    if(index >= 0 && index < length){
        arr[index] = element;
    }
}

int add_all_elements(int arr[], int length){
    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int add_all_elements_recursively(int arr[], int length){
    if (length == 0){
        return 0;
    }
    return add_all_elements_recursively(arr, length-1) + arr[length-1];
}

int avg_all_elements(int arr[], int length){
    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum += arr[i];
    }
    return sum/length;
}

struct Array
{
    int A[10];
    int size;
    int length;
};


int main(){
   Array arr = {{1, 2, 3, 4, 5}, 10, 5}; 
   cout << get_element(arr.A, 3, arr.length)<<endl;
   return 0;
}
