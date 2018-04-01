#include<iostream>
#include<ctime>
#include<cstdlib>
#include<fstream>
#include<string>

using namespace std;

//variables
//10000 run time=0.326
//1000 run time = 0.002

void swapper(int& a, int& b) ;
void sort(string a[],int size);
bool swapneeded(string& first,string& second);
bool swapneeded(string first, string second);
main(){

//get the characters from the user and insert them into the array.
string filename;

//let the user make the name of the file
cout<<"Enter a file name(with extension): "<<endl;
cin>>filename;
//this takes a string and returns it as an array of characters
ifstream input(filename.c_str());

if (input.fail()){
    cout<<filename<<" does not exist"<<endl;
    return -1;
    }
int size = 1000;
string a[size];

string text;
for(int i=0;i<size;i++){
    getline(input,text);
    cout<<text<<endl;

}
input.close();



//starts and stops the timer
clock_t start_t=clock();

clock_t stop_t=clock();



//prints the execution time
cout<<"the execution time is " <<(float)(stop_t-start_t)/ CLOCKS_PER_SEC;
}

void swapper(int& a, int& b) {
    char c;
    c=a;
    a=b;
    b=c;
}

//THIS SORTS THE VALUES IN THE ARRAY
void sort(int a[],int size){
    int i;
    int j;
    bool swapped;
    for (int i = 0; i < size-1; i++)
   {
     swapped = false;
     for (int j = 0; j < size-i-1; j++)
     {
        if (a[j] > a[j+1])
        {
           swapper(a[j], a[j+1]);
           swapped = true;
        }
     }

}
}
