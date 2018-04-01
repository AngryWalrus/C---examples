#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;

//variables
//10000 run time=0.326
//1000 run time = 0.002

void swapper(int& a, int& b) ;
void sort(int a[],int size);

main(){
//get the numbers from the user and insert them into the array.
int a[1000];

srand(time(NULL));
for (int i=0;i<1000;i++){

int r= rand();
a[i]=r;
}
//starts and stops the timer
clock_t start_t=clock();
sort(a,1000);
clock_t stop_t=clock();


for (int i=0;i<1000;i++){
    cout<<a[i]<<" ";
}
//prints the execution time
cout<<"the execution time is " <<(float)(stop_t-start_t)/ CLOCKS_PER_SEC;
}

void swapper(int& a, int& b) {
    int c;
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
