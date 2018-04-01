/*
Matthew Lapres-Northey, 100653126, exam q5

get a course code fron the user
store it in a position in the array
add one to the number of stored codes
repeat until "DONE" is enetered

*/

#include<string>
#include<iostream>

using namespace std;

string user_input; //the course code the user enters
string arr[20]; //since we do not know how many codes will be input, default to more than should be necessary.
int num_codes = 0; //this will be the array position of each code.

int main(){

    while (user_input!="DONE"){

        cout<<"Enter a course code. Type \"DONE\" once you are finished"<<endl;
        cin>>user_input;

        if (user_input != "DONE"){
            arr[num_codes] = user_input;
            num_codes++;
        }
    }
}
