#include<iostream>
#include<windows.h>
#include<cmath>
#include<string>
#include<map>

using namespace std;



string colors[6]={"white","yellow","blue","green","red","orange"};

//sets the colors for the corners
string c1[3]={colors[0],colors[2],colors[4]};
string c2[3]={colors[0],colors[2],colors[5]};
string c3[3]={colors[0],colors[3],colors[4]};
string c4[3]={colors[0],colors[3],colors[5]};
string c5[3]={colors[1],colors[2],colors[4]};
string c6[3]={colors[1],colors[2],colors[5]};
string c7[3]={colors[1],colors[3],colors[4]};
string c8[3]={colors[1],colors[3],colors[5]};

//sets the colors for the edges
string e1[3]={colors[0],colors[2]};
string e2[3]={colors[0],colors[3]};
string e3[3]={colors[0],colors[4]};
string e4[3]={colors[0],colors[5]};
string e5[3]={colors[1],colors[2]};
string e6[3]={colors[1],colors[3]};
string e7[3]={colors[1],colors[4]};
string e8[3]={colors[1],colors[5]};
string e9[3]={colors[2],colors[4]};
string e10[3]={colors[2],colors[5]};
string e11[3]={colors[3],colors[4]};
string e12[3]={colors[3],colors[5]};

string corners[8][3] = {c1,c2,c3,c4,c5,c6,c7,c8};
string edges[12][3] = {e1,e2,e3,e4,e5,e6,e7,e8,e9,e10,e11,e12};
string centers[6][3] = {colors[0],colors[1],colors[2],colors[3],colors[4],colors[5]};

string cube[3][3][3]={{c3,e2,c4},{e3,e3,e4},{c1,e1,c2}};
//string cube[3][3][3]={{c3,c3,c4},{c3,c5,c4},{c1,c1,c2}};

//print either all of a certain type of piece
int printSet(string type){
    if (type == "edge"){
        cout<<"EDGES: "<<endl;
        for (int i = 0;i<12;i++){
            cout<<"e"<<i+1<<" ";
            for (int j = 0;j<2;j++){
                cout<<edges[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else if (type== "corner"){
        cout<<"CORNERS: "<<endl;
        for(int i = 0;i<8;i++){
            cout<<"c"<<i+1<<" ";
            for(int j = 0;j<3;j++){
                cout<<corners[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else if (type == "center"){
        cout<<"CENTERS: "<<endl;
        for (int i = 0;i<6;i++){
            cout<<centers[i][j]<<endl;
        }
    }
}

int main(){
    printSet("edge");
    printSet("corner");
    printSet("center");
}
