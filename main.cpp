/*
Data Structure for storing infomation in the 16 tiles: a 4*4 int array.
Main functions to implemented:
1. void printTiles(int tiles[4][4], int score); //Print the interface of the game.
2. void random(int tiles[4][4]); //Generate one random tile of 2 or 4 in the blank space.
3. void slide(int tiles[4][4], int &score); //Read user's input of direction, slide the tiles, and update the score. Supported by:
  (i)   void move(int tiles[4][4], char direction); //Move the tiles according to the direction.
  (ii)  int merge(int tiles[4][4], char direction); //Merge two or more tiles according to the direction, if possible.
5. bool fail(int tiles[4][4]); //Check if the game should end (when there's no legal moves)
*/

//main.cpp
#include <iostream>
//#include ".h"
using namespace std;

int main(){
  int tiles[4][4];
  int score = 0;
  /*
  Some personalised functions here.
  Print the instructions as well.
  */
  random(tiles);
  random(tiles);
  printTiles(tiles, score);
  While(!fail(tiles)){
    slide(tiles, &score);
    printTiles(tiles, score);
    random(tiles);
    printTiles(tiles, score);
  }
//Saving the file and etc.
}
