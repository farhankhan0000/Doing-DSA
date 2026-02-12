#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            cout<<"*";
        }
        if(i != n - 1){
        for (int k = 0; k < (2*n)-(2*i)-2; k++)
        {
            cout<<" ";
        }
    }
        for (int k = 0; k < i+1; k++)
        {
           cout<<"*";
        }
        cout<<"\n";
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i; j++)
        {
            cout<<"*";
        }
        if(i != 0){
            for (int k = 0; k < 2*i; k++)
            {
                cout<<" ";
            }    
        }
        for (int l = 0; l < n-i; l++)
        {
            cout<<"*";
        }
        cout<<"\n";
        
    }
    return 0;
    
    
}