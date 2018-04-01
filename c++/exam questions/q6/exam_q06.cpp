/*
Matthew Lapres-Northey, 100653126, exam q6

create a 2-D dynamic array of size 4x4
fill it randomly with X's and O's
Destroy it

*/
#include<string>
#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;

int main(){
    //creates the seed based on the current time
    srand(time(NULL));

    //1-D dynamic array
    char* x = new char[4];


    //2-D dynamic array
    char** big = new char*[4];

    //randomly assigns x or O to the spot in the array
    //i could not make the letters for each row change
    //it always returns the same value when run for a new row
    for (int i = 0;i<4;i++){
        for(int j = 0;j<4;j++){
            if(((rand())%2) == 0){
            x[i] = 'X';
            }
            else{
            x[i] = 'O';
            }
            big[i] = x;
        }
    }
    for(int i = 0;i<4;i++){
        cout<<big[i];
        cout<<endl;
    }
//delete the array
delete [] big;
}
