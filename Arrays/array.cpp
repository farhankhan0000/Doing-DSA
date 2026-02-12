#include <iostream>
using namespace std;

int main(){
    int size = 5;
    int marks[size];
    //marks[0] = 101;
    //int sz = sizeof(marks);
    // cout<<sizeof(marks)/sizeof(int)<<endl;
    // cout<<marks[0]<<endl;
    for (int i = 0; i < size; i++)
    {
        cin>>marks[i];
    }
    
    for (int i = 0; i < size; i++)
    {
        cout<<marks[i]<<endl;
    }
    
    return 0;
}