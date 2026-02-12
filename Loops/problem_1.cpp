#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n: \n";
    cin>>n;
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
        if(i == 5){
            break;
        }
    }
    cout<<sum<<endl;
    return 0;
}