// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter n: ";
//     cin>>n;
//     char ch = 'A';
//     for (int i = 0; i < n; i++)
//     {
//         for(int j = 0; j < i; j++){
//             cout<<" ";
//         }
//         for (int k = 0; k < n-i; k++)
//         {
//             cout<<ch;
//         }
//         cout<<"\n";
//         ch = ch + 1;
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
        for(int j = 0; j < i; j++){
            cout<<" ";
        }
        for (int k = 0; k < n-i; k++)
        {
            cout<<(i+1);
        }
        cout<<"\n";
    }
    return 0;
}