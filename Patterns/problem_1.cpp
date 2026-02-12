#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number n: \n";
    cin>>n;
    for (int i = 0; i < n; i++)
    { // outer loop
        int ch = 1;
        for(int j = 0; j < n; j++){// inner start means line start
            cout<<ch;
            ch = ch + 1;
        }
        cout<<endl;
    }
    return 0;
    
}