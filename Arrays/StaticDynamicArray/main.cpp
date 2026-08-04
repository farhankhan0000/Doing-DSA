#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
   int size;
   cin>>size;
   int *p;
   p = new int[size];
   for (int i = 0; i < size; i++)
   {
    cin>>p[i];
   }
   
   for (int i = 0; i < size; i++)
   {
    cout<<p[i];
   }
   
   return 0;
}