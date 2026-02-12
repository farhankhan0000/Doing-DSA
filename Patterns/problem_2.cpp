// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter the number n: \n";
//     cin>>n;
//     int ch = 1;
//     for (int i = 0; i < n; i++)
//     { // outer loop
//         for(int j = 0; j < n; j++){// inner start means line start
//             cout<<ch;
//             ch = ch + 1;
//         }
//         cout<<endl;
//     }
//     cout<<"after pattern number = "<<ch<<endl;
//     return 0;
    
// }

#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number n: \n";
    cin>>n;
    char ch = 'A';
    for (int i = 0; i < n; i++)
    { // outer loop
        for(int j = 0; j < n; j++){// inner start means line start
            cout<<ch<<" ";
            ch = ch + 1;
        }
        cout<<endl;
    }
    cout<<"after pattern character = "<<ch<<endl;
    return 0;
    
}