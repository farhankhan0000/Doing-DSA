// #include <iostream>
// using namespace std;

// int main(){
//     {
//         int x = 10 // Local Variable
//     }
    
//     cout<<x<<endl;
//     return 0;

// }

#include <iostream>
using namespace std;

int  x = 10;

void fun(){
    cout<<x<<endl;
}
int main(){
    fun();
    cout<<x<<endl; // Global Variable
    return 0;
}