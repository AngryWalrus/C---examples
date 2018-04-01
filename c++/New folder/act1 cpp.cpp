#include<iostream>
#include<string>
#include<fstream>
#include<cstdlib>

using namespace std;

int main(){
//set up variables

int lines;//number of lines to read in
string filename;//name of the file
string text [5];//text we read from the file

//prompt the user for a number and read it in.
cout<<"How many lines should we read in?(1-5)"<<endl;
cin>>lines;

//get the number of lines from in.txt
ifstream file_input("in.txt");//input stream

for(int i=0;i<lines;i++){
    getline(file_input,text[i]);
}
//close the file
file_input.close();


//prompt the user for a filename
cout<<"Where should we output the text?"<<endl;
cin>>filename;

ofstream file_output(filename.c_str(), ios::app);
//write the lines from in.txt to the new file.

if (file_output.fail()){
    cout<<"File writing error"<<endl;
    return -1;

}
for(int i=0;i<lines;i++){
    file_output<<text[i];

}

file_output.close();


}

