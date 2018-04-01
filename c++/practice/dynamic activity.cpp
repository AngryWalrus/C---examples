#include<iostream>
#include<cstdlib>
using namespace std;

/*
print the number of each integer in the array
*/
int main(){
int *p1;
int size;

cout<<"Enter the size: "<<endl;
cin>>size;

p1 = new int[size];
int p2[size];

cout<<"Enter the integers "<<endl;

//get the numbers
for(int i = 0;i<size;i++){
    cin>>p1[i];
}

int count=1;
//gets the number of unique numbers
for(int i = 0;i<size;i++){
    for (int j = 0;j<i;j++){
        cout<<"j= "<<j<<endl;
        if(p1[i]!=p1[j]){
            count++;
            cout<<"count: "<<count<<endl;;
        }
    }
    cout<<"number of unique: "<<count<<endl;

}

//print the numbers
for(int i = 0;i<size;i++){


}



}
