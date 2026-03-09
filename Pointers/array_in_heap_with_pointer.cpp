#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main(){
    int *p;
    // p = (int *) malloc(5*sizeof(int));
    p = new int[5];
    for(int i = 0; i < 5; i++){
        cout<<"Enter the values ";
        scanf("%d", &p[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        cout<<p[i]<<endl;
    }
    // free(p);
    delete [] p;
    return 0;
    
}