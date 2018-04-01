/*
Rubiks Cube Simulator
Author: Matthew Lapres-Northey
Copyright 2017

sesh # | hrs | summary
---------------------------------------------------------------------
   1   |  4  | initializecube,printcube, attempted rotateCube
---------------------------------------------------------------------
   2   |  4  | func rotate cube initialized, made turnCube, U' works,
       |     | spent an hour trying to get U to work, gave up
---------------------------------------------------------------------
   3   | 1.5 | get colors for the sides to work,
               started cube rotation
---------------------------------------------------------------------
   4   |  6  | set the values for cube rotaion in arrays for y rot
       |     | values were swapped but not rotated
       |     | created a spinarray function which spins face

*/

#include<iostream>
#include<windows.h>
#include<cmath>

using namespace std;

char cube[9][12];
char Back[3][3],Front[9][12],Left[9][12],Right[9][12],Top[9][12],Bottom[9][12],temp[9][12];
char colors[] = {'w','y','g','b','o','r'};

void initializeCube(){
//this will initialize the cube in a 2d array
    for(int x = 0;x<9;x++){
        for (int y = 0;y<12;y++){
            //these statements exclude the areas of the array that are not cubies
            //Back
            if (x<3&&y>2&&y<6&&y>2){
                cube[x][y]= colors[3];
            }

            //Left
            else if ((x>2)&&(x<6)&&(y<3)){
                cube[x][y]= colors[4];
            }
            //Top
            else if (x>2&&x<6&&y>2&&y<6){
                cube[x][y]= colors[0];
            }
            //Right
            else if (x>2&&x<6&&y>5&&y<9){
                cube[x][y]= colors[5];
            }
            //Bottom
            else if (x>2&&x<6&&y>8&&y<12){
                cube[x][y]= colors[1];
            }

            //Front
            else if (x>5&&y>2&&y<6){
                cube[x][y]= colors[2];
            }

        }

    }

}
//this function will rotate an n size array clockwise or counterclockwise
//each quadrant in the array will spin differently
void spinArray(char m[3][3]){

char hold[3][3];
hold[0][0]= m[0][2];
hold[0][1]= m[1][2];
hold[0][2]= m[2][2];
hold[1][0]= m[0][1];
hold[1][1]= m[0][2];
hold[1][2]= m[2][1];
hold[2][0]= m[0][0];
hold[2][1]= m[1][0];
hold[2][2]= m[2][0];
    for (int a = 0;a<3;a++){
        cout<<endl;
        for (int b = 0;b<3;b++){
            cout<<hold[a][b]<<"-";

        }
    }

//corners

}
void rotateCube(char axis,char direction){
    //y will rotate the cube as if doing a U turn
    //x will rotate the cube as if doing an R turn
    //z will rotate the cube as if doing an F turn
    if(axis == 'y'){
        if(direction == '\''){
            cout<<"you did a y' rotation"<<endl;
        }
        else if (direction == ' '){
            cout<<"you did a y rotation"<<endl;
            for(int x = 0;x<9;x++){
                for (int y = 0;y<12;y++){
                    //Back
                    if (x<3&&y>2&&y<6){
                        Back[x][y]= cube[x][y];

                    }
                    //Left
                    else if ((x>2)&&(x<6)&&(y<3)){
                         Left[x][y]=cube[x][y];
                    }
                    //Top
                    else if (x>2&&x<6&&y>2&&y<6){
                        Top[x][y]= cube[x][y];
                    }
                    //Right
                    else if (x>2&&x<6&&y>5&&y<9){
                        Right[x][y]= cube[x][y];
                    }
                    //Bottom
                    else if (x>2&&x<6&&y>8&&y<12){
                        Bottom[x][y]= cube[x][y];
                    }

                    //Front
                    else if (x>5&&y>2&&y<6){
                        Front[x][y]= cube[x][y];
                    }

                }
            }
            for(int x = 0;x<9;x++){
                for (int y = 0;y<9;y++){
                    //Left side becomes back
                    if (x<3&&y>2&&y<6){
                        cube[x][y]=Left[x+3][y-3];
                        //temp[x][y]=Left[x+3][y-3];
                        //cout<<"Back: "<<temp[x][y]<<endl;
                    }
                    //front side becomes left side
                    else if ((x>2)&&(x<6)&&(y<3)){
                         cube[x][y]=Front[x+3][y+3];
                         //Left[x][y]=Front[x+3][y+3];
                         //cout<<"Left: "<<Left[x][y]<<endl;

                    }
                    //Right side becomes Front
                    else if (x>5&&y>2&&y<6){
                        cube[x][y]= Right[x-3][y+3];
                        //Front[x][y]= Right[x-3][y+3];
                        //cout<<"front: "<<Front[x][y]<<endl;
                    }
                    //Right face is replaced by back face

                    else if (x>2&&x<6&&y>5&&y<9){
                        temp[x][y]= Back[x-3][y-3];
                            for (int x = 5;x>2;x--){
                                for (int y = 6;y<9;y++){
                                    //col 6
                                    if (x == 5){
                                        int d = 5;
                                        cube[x][y] = temp[d][x+3];
                                        if (d == 3)
                                        d = 5;
                                        else
                                        d--;
                                    }
                                    //col 5
                                    if (x == 4){
                                        int d = 5;
                                        cube[x][y]= temp[d][x+3];
                                        if (d == 3)
                                        d = 5;
                                        else
                                        d--;
                                    }
                                    //col 4
                                    if (x == 3){
                                        int d = 5;
                                        cube[x][y]= temp[d][x+3];
                                        if (d == 3)
                                            d = 5;
                                            else
                                            d--;
                                    }

                                }
                            }
                            spinArray(cube);
                        //temp[x][y]= Back[x-3][y-3];
                        cout<<"Right: "<<cube[x][y]<<endl;
                    }

                }

            }
        }

    }

    else if(axis == 'x'){
        if(direction == '\''){
            cout<<"you did a x' rotation"<<endl;
        }
        else{
        cout<<"you did a x rotation"<<endl;
        }
    }
    else if(axis == 'z'){
        if(direction == '\''){
            cout<<"you did a z' rotation"<<endl;
        }
        else{
        cout<<"you did a z rotation"<<endl;
        }
    }
}
void testPrint(){
for (int i = 0;i<9;i++){
    cout<<endl;
    for (int j = 0;j<12;j++){
        cout<<Back[i][j]<< " ";
    }
}
}
void printCube(){
    HANDLE  hConsole;
    int k;

    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    for(int x = 0;x<9;x++){
        cout<<endl;
        for (int y = 0;y<12;y++){
            //white letter 15 block 511
            if (cube[x][y]== colors[0]){
                SetConsoleTextAttribute(hConsole, 15);
            }
            //yellow 14 494
            else if (cube[x][y]== colors[1]){
                SetConsoleTextAttribute(hConsole, 14);
            }
            //green 10 426
            else if (cube[x][y]== colors[2]){
                SetConsoleTextAttribute(hConsole, 10);
            }
            //blue 9 443
            else if (cube[x][y]== colors[3]){
                SetConsoleTextAttribute(hConsole, 9);
            }
            //orange
            else if (cube[x][y]== colors[4]){
                SetConsoleTextAttribute(hConsole, 0003);
            }
            //red 12 460
            else if (cube[x][y]== colors[5]){
                SetConsoleTextAttribute(hConsole, 12);
            }
            cout<<cube[x][y]<<" ";
        }
    }
}

//this will turn the cube in a given direction using WCA notation
void turnCube(char turn,char direction){//array cube){
    //U turn,cw rt of the top face
    if (turn == 'U' && direction == '\''){
        // temp will store the values of one face so that it can be rotated
        char temp[9][12];
        for (int x = 2;x<7;x++){
            for (int y = 2;y<7;y++){
                temp[x][y]= cube[x][y];
            }
        }
        // sets the new cube values after rotation using grid values
        int d=0;
        for (int x = 6;x>1;x--){
            for (int y = 2;y<7;y++){
                //col 6
                if (x == 6){
                    cube[x][y] = temp[y][y-d];
                    if (d == 4)
                    d = 0;
                    else
                    d++;
                }
                //col 5
                if (x == 5){
                    cube[x][y]= temp[y][y-d+1];
                    if (d == 4)
                    d = 0;
                    else
                    d++;
                }
                //col 4
                if (x == 4){
                    cube[x][y]= temp[y][x];
                }
                //col 3
                if (x == 3){
                    cube[x][y] = temp[y][y-d+1];
                    if (d == 4)
                    d = 0;
                    else
                    d++;
                }
                //col 2
                if (x == 2){
                    cube[x][y] = temp[y][y-d+4];
                    if (d == 4)
                    d = 0;
                    else
                    d++;
                }

            }
        }
    }
    //just do three U'
    if (turn == 'U' && direction == ' '){
        // temp will store the values of one face so that it can be rotated
        char temp[9][12];
        for (int x = 2;x<7;x++){
            for (int y = 2;y<7;y++){
                temp[x][y]= cube[x][y];
            }
        }
        // sets the new cube values after rotation using grid values
        int d=4;
        for (int x = 6;x>1;x--){
            for (int y = 2;y<7;y++){
                //col 6
                if (x == 6){
                    cube[x][y] = temp[y+d][x];
                    if (d < 0)
                    d = 4;
                    else
                    d--;
                }
                //col 5
                if (x == 5){
                    cube[x][y]= temp[y+d][x];
                    if (d < 0)
                    d = 4;
                    else
                    d--;
                }
                //col 4
                if (x == 4){
                    cube[x][y]= temp[y][x];
                }
                //col 3
                if (x == 3){
                    cube[x][y] = temp[y+d][x];
                    if (d < 0)
                    d = 4;
                    else
                    d--;
                }
                //col 2
                if (x == 2){
                    cube[x][y] = temp[y+d][x];
                    if (d < 0)
                    d = 4;
                    else
                    d--;
                }

            }
        }
        /*for (int i = 0;i<9;i++){
            for (int j = 0;j<12;j++){
                return cube[x][y];
            }
        }*/
    }


}

void colorTest(){
    for(int k = 0; k < 255; k++)
    {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    // pick the colorattribute k you want
    SetConsoleTextAttribute(hConsole, k);
    cout << k << " I want to be nice today!" << endl;
    }

}
main(){
//colorTest();
//initializeCube();


}
