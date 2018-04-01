#include<iostream>
#include<string>
#include<fstream>


using namespace std;
//g++ -std
main(){

    string filename;

    //let the user make the name of the file
    cout<<"Enter a file name: "<<endl;
    cin>>filename;
    //this takes a string and returns it as an array of characters
    ofstream file_output(filename.c_str());


    //write to the file
    string user_input;
    do{

    cout<<"enter a word to store, type exit to stop"<<endl;
    cin>>user_input;

    if (!(user_input=="EXIT")){


        file_output<<user_input;
        file_output<<endl;
    }}while(user_input!="EXIT");

    //close the file
    file_output.close();

    cout<<"Enter a file name: "<<endl;
    cin>>filename;

    ifstream file_input(filename.c_str());

    cout<<"how many lines would you like to read?"<<endl;
    int lines;
    cin>>lines;

    string text;
    for(int i=0;i<lines;i++){
        getline(file_input,text,'P');
        cout<<text<<endl;
    }
}