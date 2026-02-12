// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter n: ";
//     cin>>n;
//     for (int i = 0; i < n; i++)
//     {
//         int num = 1;
//         for (int j = 0; j < n-i-1; j++)
//         {
//             cout<<" ";
//         }
//         for (int k = 0; k < i+1; k++)
//         {
//             cout<<num;
//             num++;
//         }
//         cout<<"\n";      
//     }
//     return 0;
// }

#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            cout<<" ";
        }
        for (int k = 1; k <= i+1; k++)
        {
            cout<<k;
        }
        for (int l = i; l >= 1; l--)
        {
            cout<<l;
        }
        cout<<"\n";      
    }
    return 0;
}