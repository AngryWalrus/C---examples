#include<string>
#include<iostream>

using namespace std;

class TicTacToe{
private:
    //declare a pointer
    int* p1;
    //this should be whats used as the array, but did not work.
    char** p2;

    int n = 3;
    p1 = &n;
    //use new to declare a dynamic array that is 3x3
    p2 = new char[p1][n];

public:
    //fills the array with x's
    TicTacToe(){
        for (int i = 0;i<n;i++){
            for (int j = 0;j<n;j++){
                p2[i][j]='x';
        }
    }
    //print function
    print(){
        cout<<p2;
    }
    //deconstructor
    ~TicTacToe(){

        delete p2;
    }


};

int main(){


}
