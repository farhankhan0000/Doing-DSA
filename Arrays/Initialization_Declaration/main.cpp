#include <iostream>
using namespace std;

int main(){
    int A[5];
    int B[5] = {1, 2, 3, 4, 5};
    int c[5] = {1, 2};
    int D[5] = {0};
    int E[] = {1, 23, 33, 44, 55, 66};

    for (int i = 0; i < 5; i++)
    {
        cout<<&B[i]<<endl;
    }
    

    return 0;
}