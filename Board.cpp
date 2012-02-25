/* 
 * File:   Board.cpp
 * Author: emacdona
 * 
 * Created on February 20, 2012, 1:06 PM
 */

#include "Board.h"
#include "Piece.h"
#include <iostream>
#include <utility>
#include <strstream>

using namespace std;

static const int ROWS = 8;
static const int COLS = 8;

Board::Board() {
   for(int i=0; i<ROWS; i++) {
      board.push_back(vector<Square>());
      for(int j=0; j<COLS; j++) {
         board[i].push_back(Square(i,j));
      }
   }
   
   strstream msg;
   
   //Everything is constructed, now let's link neighbors. This could have
   //been done during Square construction, but it's clearer to do it separately.
   for(int i=0; i<ROWS; i++) {
      for(int j=0; j<COLS; j++) {
      
         if(i>0)
            board[i][j].neighbors.insert(make_pair(N, &board[i-1][j]));
         
         if(j>0)
            board[i][j].neighbors.insert(make_pair(W, &board[i][j-1]));
         
         if(i != ROWS-1)
            board[i][j].neighbors.insert(make_pair(S, &board[i+1][j]));
         
         if(j != COLS-1)
            board[i][j].neighbors.insert(make_pair(E, &board[i][j+1]));
         
         if(i>0 && j>0)
            board[i][j].neighbors.insert(make_pair(NW, &board[i-1][j-1]));
         
         if(i != ROWS-1 && j>0)
            board[i][j].neighbors.insert(make_pair(SW, &board[i+1][j-1]));
         
         if(i>0 && j != COLS-1)
            board[i][j].neighbors.insert(make_pair(NE, &board[i-1][j+1]));
         
         if(i != ROWS-1 && j != COLS-1)
            board[i][j].neighbors.insert(make_pair(SE, &board[i+1][j+1]));
         
      }
   }
}

Board::Board(const Board& orig) {
}

Board::~Board() {
#ifdef _DEBUG
   cout << "Calling ~Board()" << endl;
#endif
}

