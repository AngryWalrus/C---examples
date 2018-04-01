#include <iostream>
#include <cmath>
#include <ctime>
#include<cstdlib>

using namespace std;

//GUESS THAT NUMBER!
int guess;


//3 rounds, r1 less than 5, r2 less than 10, r3 less than 20.
int main(){
int round =1;
int numTry=4;
int Max=5;

        //sets the random number using the seed

srand(time(NULL));
int randNum= rand();
randNum=(randNum%(Max));





cout<<"-----------------------------"<<endl;
cout<<"Welcome to guess that number!"<<endl;
cout<<"-----------------------------"<<endl;

    while(numTry!=0){

    	//toggle the next line to see the answer while playing.
        //cout<<randNum<<endl;
        cout<<"Round: "<<round<<endl;

        cout<<"Guess a number less than "<<Max<<":";
        cin>>guess;

//if they guess correctly a new number is picked and the number of tries is reset.
        if (guess==randNum){
            cout<<"Correct! The number was "<<randNum<< "!"<<endl;
            srand(time(NULL));
            randNum= rand();
            randNum=(randNum%(Max));
            round ++;
            numTry=5;
            Max=Max*2;

}

        else {
            cout<<"Incorrect! "<<numTry<<" Tries remaining"<<endl;
            numTry--;
             }

}
cout<<"Game Over. Out of guesses. ):"<<endl;
 }










