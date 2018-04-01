//ultimate bunny code 1060U
#include<iostream>
#include<string>
#include<fstring>
#include<ctime>
#include<cstdlib>

using namespace std;

struct bunny{
    Bunny();//constructor
    string color;
    Bunny *next; //next bunny in linked list

};

Bunny::Bunny(){
    next = NULL;
    //choose a random color//white,black
    if(rand()%2==1)
        color="white";
    else{
        color="black";
    }
}

class Bunnies{
    private:
        Bunny *first;//first bunny

};
int main(){
    srand(time(NULL));
}

