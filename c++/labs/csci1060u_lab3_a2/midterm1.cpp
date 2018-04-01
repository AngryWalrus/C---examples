/* Matthew Lapres-Northey, 100653126, csci1060u, oct*/

#include<string>
#include<iostream>

using namespace std;

/*
1.get string from user
2.get string using writeString
3.open the file
4.write to the file
5.check if user_input was written to the file.
5a. if yes, return true and see 6.
5b. if no, return false.
6.check if user has Input Quit
6a. if yes, close file.
6b. if no, see step 1.
7.close the file
*/

writeString(string userString)
{
//this is the name of the file
string input = "user.txt";

//open the file so it can be modified
ofstream file.open(input);

//writes the string to the file
input>>userString>>endl;

//checks if user_input was written to the file
if(){
    return true;
}
else
    return false;

//close the file
ofstream input.close();
}

//gets a string from the user
main(){

    //this is an empty string
    string user_input = "";

    //prompts user for strings until they enter QUIT
    while(user_input!="QUIT")
    {
        cout<<"Enter a word: "<<endl;
        cin>>user_input;
        writeString(user_input);
    }

    cout<<"over"<<endl;;



}


