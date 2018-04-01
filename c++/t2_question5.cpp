#include<string>
#include<iostream>

using namespace std;

//dynamic 2-d array should have a pointer to another pointer.
//this did not work. however i showed what i believe is close to the right answer.

int main(){
    //declare a pointer
    int* p1;
    //this should be whats used as the array, but did not work.
    char** p2;

    int n = 3;

    //use new to declare a dynamic array
    *p2 = new p1[3];

    //fill the array with x's
    for (int i = 0;i<n;i++){
        for (int j = 0;j<n;j++){
            p2[i][j]='x';
            cout<<p2[i][j];
        }


    }
    delete p1;
    delete p2;
}
