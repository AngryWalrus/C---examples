#include<iostream>
#include<cstdlib>
using namespace std;

typedef int* IntPtr;
typedef double* DblPtr;
typedef char* CharPtr;

int main(){
CharPtr p1;
int size;

//this tells you how many bytes are allocated
//cout<<"sizeof(int) ="<<sizeof(int);

cout<<"input the size of the array"<<endl;
cin>>size;
p1 = new char[size];

for(int i = 0;i<size;i++){
    p1[i]=i;
    cout<<p1[i]<<" ";

}

for(int i = 0;i<size;i++){
    cout<<"item "<<i<<" ="<<p1[i]<<" ";
    cout<<"address of item "<<i<<" is "<< int(p1+i);
    cout<<endl;
}

}
