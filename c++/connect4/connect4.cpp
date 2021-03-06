#include<iostream>
#include<string>

using namespace std;


//gameboard
char board[6][7];

/*makes an array to diplay only dashes(-)*/
void InitializeBoard();

/*iterates through the board and prints
to the screen each piece or empty slot*/
void DisplayBoard();

/*AddPiece adds a piece of type 'piece'
(x or O) to column number 'col'*/

/*the piece will go to the lowest unnoccupied
position in the column*/
bool AddPiece(int col,char piece);

/*When we execute this program,
it will run through one full game.
game ends when no moves remain OR
player makes a line of four.*/

/*replaces board elements with -'s*/
//params: none
//return: none
void InitializeBoard(){
    for(int i =0;i<6;i++){
        for (int j = 0;j<7;j++){
            board[i][j] = '-';
    }
}
}

//prints in a gridlike fasion the contents of the array
//params: none
//return: none
void DisplayBoard(){
    for(int row =0;row<6;row++){
        for (int col = 0;col<7;col++){
            cout<<board[row][col]<<"\t";
    }
    cout<<endl;
}
}

//inserts a piece in the grid at the bottom possible row of the chosen column.
bool AddPiece(int col,char piece){
    if (board[col][0] != '-') {
    return false;
  } else {
    board[5][col] = piece;
    for (int row = 5;row >= 0; row--){

        if(board[row][col] == '-'){
        board[row][col] = piece;
        return true;
        }
    }
     return false;
}
}

//checks to see if game has ended.
bool isGameOver(char piece);
//if someone connected 4 adjacent pieces of the same tyope or board is full.
//params: piece, type of piece that was most recently placed
//return: true if the game is over
bool isGameOver(char piece){

int columnssFilled;

for (int col = 0;col<7;col++){
    if ((board[0][col])!='-'){
        return false;}
}
return true;
}

int main(){
InitializeBoard();
AddPiece(3,'X');
AddPiece(3,'O');
AddPiece(3,'O');
AddPiece(3,'O');
DisplayBoard();
}

//indicate which player is starting
//and which column should receive a piece
//put a piece in that column
//alternate player
//repeat until game ends
