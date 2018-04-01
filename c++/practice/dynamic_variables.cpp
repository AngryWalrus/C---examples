#include<iostream>
#include<string>

using namespace std;


int main(){

int *p1;
int x;
p1 = new int;

x = 5;
*p1 = 5;

cout<<"x is: "<<x<<endl;
cout<<"the address of x is: "<<&x<<endl;
cout<<"*p1 is: "<<*p1<<endl;
cout<<"the address of p1 is: "<<p1<<endl;

x=7;
int *p2;
p2 = new int;
int *p3;
p3 = new int;
p3=p1;
delete p1;

cout<<"*p1 is: "<<*p1<<endl;
cout<<"the address of p1 is: "<<p1<<endl;
cout<<"*p2 is: "<<*p2<<endl;
cout<<"the address of p2 is: "<<p2<<endl;
cout<<"*p3 is: "<<*p3<<endl;
cout<<"the address of p3 is: "<<p3<<endl;



}
