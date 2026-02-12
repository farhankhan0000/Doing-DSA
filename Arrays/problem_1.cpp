#include <iostream>
#include <climits>
using namespace std;

int main(){
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        cin>>arr[i];
    }
    int largest = INT_MIN;
    int smallest = INT_MAX;
    int index_for_largest = 0;
    int index_for_smallest = 0;
    for (int i = 0; i < 10; i++)
    { //min and max function can also be used here 
        if(arr[i] > largest){
            largest = arr[i];
            index_for_largest = i;
        }
        if(arr[i] < smallest){
            smallest = arr[i];
            index_for_smallest = i;
        }
        // smallest = min(arr[i], smallest);
        // largest = max(arr[i], largest);
    }
    
    cout<<"largest = "<<largest<<endl;
    cout<<"index for largest = "<<index_for_largest<<endl;
    cout<<"smallest = "<<smallest<<endl;
    cout<<"index for smallest = "<<index_for_smallest<<endl;
    return 0;
}