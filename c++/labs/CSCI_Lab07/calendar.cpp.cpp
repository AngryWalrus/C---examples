/*          Calendar Printing Program(CPP)         */

/*
Author: Matthew Lapres-Northey
Student ID: 100653126
November 11th, 2017
Class: CSCI 1060U

*/
#include<string>
#include<iostream>
#include<cmath>

using namespace std;

int empty_day2 = 0;

bool isLeap(int year){

    if ((year%4==0 && year%100!=0)||(year%4==0&&year%100==0&&year%400==0)){
        //cout<<"Leap Year"<<endl;
        return true;
    }
    return false;
}
int getMonth(string month, int year){

    //when d is 0, the formula works for the first day
    int d = 0;
    string months[12]={"march","april","may","june","july","august","september","october","november","december","january","february"};
    string days[7]={"sunday","monday","tuesday","wednesday","thursday","friday","saturday"};
    int C = int(floor(year/100));
    int m;
    int year_l = (year)%100;

    for (int i = 0;i<12;i++){
        if (months[i]==month){
            m=i+1;
        }
    }

    //calculates the weekday of january 1st of that year
    int first_day = ((int)((d+floor(2.6*m-0.2))+year_l+(floor(year_l/4))+(floor(C/4))-2*C))%7;

    for (int i = 0;i<7;i++){
        if(i == first_day){
            string(first_day) = days[i];
        }

    }
    //cout<<"weekday: "<<first_day<<endl;
    //cout<<months[m-1]<<" "<<d+1<<" was a "<<days[first_day]<<endl;
    return first_day;

}

int printMonth(string month, int year){

    //the number of slashes(//) is equal to the value of the first day of the month
    //so if it starts on a tuesday, tuesday is 2, so spots 0 and 1 will have slashes
    int first_day = getMonth(month,year);
    int num_days;
    //put the correct number of days in each month
    if(month=="january")
        num_days=31;
    else if(month=="march")
        num_days = 31;
    else if(month=="april")
        num_days = 30;
    else if(month=="may")
        num_days = 31;
    else if(month=="june")
        num_days = 30;
    else if(month=="july")
        num_days = 31;
    else if(month=="august")
        num_days = 31;
    else if(month=="september")
        num_days = 30;
    else if(month=="october")
        num_days = 31;
    else if(month=="november")
        num_days = 30;
    else if(month=="december")
        num_days = 31;

    int february;
    if (isLeap(year)==true && month=="february"){
        num_days = 29;
    }
    else if (isLeap(year)==false && month =="february")
        num_days = 28;

    //prints out a calendar of 7 days and up to 5 weeks
    int day=1;
    int empty_day = 0;

    //print the month name
    cout<< "       "<<month<<"     "<<endl;

    //print the days of the week
    string week_days[7]={"S","M","t","W","T","F","s"};

    for(int i = 0;i<7;i++){
        cout<<"  "<<week_days[i];
    }
    cout<<endl;
    //prints the spaces before the month starts
    //then prints all of the numbers
    if(month=="january"){
        for (int i = 0; i< 6;i++){
            for (int j = 0;j<7;j++){
                //empty spaces before jan 1
                if(empty_day<first_day-1){
                    cout<<" //";
                    empty_day++;
                }
                else if(day<=num_days){
                    //this makes single digit days take two characters of space
                    if(day<10){
                        cout<<"  "<<day;
                        day++;
                    }
                    else{
                        cout<<" "<<day;
                        day++;
                        empty_day2= j+1;
                    }
                }
            }
        cout<<endl;
        }
    }
    else{
        for (int i = 0; i< 6;i++){
            for (int j = 0;j<7;j++){
                //empty spaces before each month
                if(i==0 && j<empty_day2){
                    cout<<" //";
                }
                else if(day<=num_days){
                    //this makes single digit days take two characters of space
                    if(day<10){
                        cout<<"  "<<day;
                        day++;
                    }
                    else{
                        cout<<" "<<day;
                        day++;
                        if(j<6)
                            empty_day2= j+1;
                        else
                            empty_day2= 0;
                    }
                }

            }
        cout<<endl;

        }
    }
}

int printYear(int year){
    string month[12]= {"january","february","march","april","may","june","july","august","september","october","november","december"};
    for (int x = 0;x<12;x++){
        printMonth(month[x],year);
        cout<<endl;
    }
}

//Asks the user if they want a month or a year and runs
//the corresponding function
int main(){

    string input,calendar_month;
    int calendar_year;

    cout<<"Would you like to see a month or a year?"<<endl;
    cin>>input;

    if (input=="year"){
        cout<<"Please enter a year: "<<endl;
        cin>>calendar_year;
        printYear(calendar_year);
    }
    else if(input == "month"){
        cout<<"Please enter a month and a year: "<<endl;
        cout<<"month: "<<endl;
        cin>>calendar_month;
        cout<<"Year: "<<endl;
        cin>>calendar_year;
        printMonth(calendar_month,calendar_year);
    }
    else{
        cout<<"Please Try Again."<<endl;
        cout<<"Would you like to see a month or a year?"<<endl;
        cin>>input;
    }
}


