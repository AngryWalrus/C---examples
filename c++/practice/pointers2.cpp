#include<iostream>
#include<string>

using namespace std;

typedef int* IntPtr;

//take integer pointer and change its values
void myFunction(IntPtr p2);

int main(){
    IntPtr p1;
    int t = 20;
    p1 = &t;

    myFunction(p1);

    cout<<"value of p1 is: "<< *p1<<endl;
    cout<<"address of p1 is:"<< p1<<endl;
    cout<<" value of t :"<< t <<endl;
    cout<<"address of t :"<< &t <<endl;
}

void myFunction(IntPtr p2){
//asterisk below means that it is a dereferencing operator, getting the value of p2.
*p2 = 10;
int x = 5;
p2 = &x;
    cout<<"value of p2 is: "<< *p2<<endl;
    cout<<"address of p2 is:"<< p2<<endl;
    cout<<" value of x :"<< x <<endl;
    cout<<"address of x :"<< &x <<endl;

}
