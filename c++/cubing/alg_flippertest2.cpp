/*algorithm flipper*/

/*Matthew Lapres
November 2017*/

/*
history
nov 24
-created the  code which slips an inputted algorithm
noc 25
-
steps:
1.get a sequence of 1-2 char long moves from the user








*/
#include<string>
#include<iostream>
#include<fstream >

using namespace std;

//string moves[]={"R","R'","L","L'"};

int main(){

string filename = "Right handed algs";
string new_file = "Left handed algs";
string user_input;
string original_alg[24];
string new_alg[24];

int length;

    //reads the file
    //stores the algorithm in an array
    //P is the delimeter
    /*ifstream file_input(filename.c_str());
    */
    cout<<endl;

    //writes to the file
    ofstream file_output(new_file.c_str(),ios::app);
    do{

        cout<<"enter a move to store, type exit to stop"<<endl;
        cin>>user_input;

        if (user_input == "R")
            user_input= "L'";
        else if (user_input == "R'")
            user_input= "L";
        else if (user_input == "R2")
            user_input= "L2";
        else if (user_input == "L")
            user_input= "R'";
        else if (user_input == "L'")
            user_input= "R";
        else if (user_input == "L2")
            user_input= "R2";
        else if (user_input == "U")
            user_input= "U'";
        else if (user_input == "U'")
            user_input= "U";
        else if (user_input == "D")
            user_input= "D'";
        else if (user_input == "D'")
            user_input= "D";
        else if (user_input == "F")
            user_input= "F'";
        else if (user_input == "F'")
            user_input= "F";
        else if (user_input == "F2")
            user_input= "B2";
        else if (user_input == "B")
            user_input= "B'";
        else if (user_input == "B'")
            user_input= "B";
        else if (user_input == "B2")
            user_input= "F2";
        else if (user_input == "u")
            user_input= "u'";
        else if (user_input == "u'")
            user_input= "u";
        else if (user_input == "r")
            user_input= "r'";
        else if (user_input == "r'")
            user_input= "r";
        else if (user_input == "y")
            user_input= "y'";
        else if (user_input == "y'")
            user_input= "y";


        if (!(user_input=="EXIT")){

        file_output<<user_input;
        }
    }while(user_input!="EXIT");
    file_output<<endl;
    file_output.close();
}
