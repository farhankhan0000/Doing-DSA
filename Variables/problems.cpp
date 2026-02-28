// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     for (int i = 0; i < n; i++)
//     {
//         int num = i + 1;
//         for (int j = 0; j < i+1; j++)
//         {
//             cout<<num<<" ";
//             num--;
//         }
//         cout<<endl;

//     }
//     return 0;

// }

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value n: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*";
        }
        for (int k = 0; k < (2 * n) - (2 * i) - 2; k++)
        {
            cout << " ";
        }
        for (int l = 0; l < i + 1; l++)
        {
            cout << "*";
        }
        cout << "\n";
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << "*";
        }
        for (int k = 0; k < 2 * i; k++)
        {
            cout << " ";
        }
        for (int l = 0; l < n-i; l++)
        {
            cout<<"*";
        }
        
        cout << "\n";
    }

    return 0;
}