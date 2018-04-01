#include<string>
#include<iostream>

using namespace std;

int main(){
    string* *p1 = new string*[5];
    for(int i = 0;i<5;i++){
        p1[i] = new string[3];
        cout<<*p1[i]<<endl;
    }
    for(int i = 0;i<5;i++){
        for(int j = 0;j<3;j++){
            p1[i][j]= "penis";
            cout<<p1[i][j];
        }
        cout<<endl;
    }
    int* x ;
    cout<<"x: "<<x<<endl;
    int y = 3;
    x = &y;
    cout<<x<<endl;;
    cout<<*x;

}
