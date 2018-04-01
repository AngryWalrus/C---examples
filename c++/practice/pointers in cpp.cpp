#include<iostream>
#include<string>

using namespace std;

typedef int* IntPtr; //means an integer pointer variable
int main(){
int i = 12;
IntPtr mypointer;
mypointer = &i;
IntPtr *mypointerpointer = &mypointer;
cout<< **mypointerpointer;
int *p1;

p1=&i;
*p1=24;



}
