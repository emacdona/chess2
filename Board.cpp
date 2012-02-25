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

using namespace std;

static const int ROWS = 8;
static const int COLS = 8;

Board::Board() {
   for(int i=0; i<ROWS; i++) {
      pieces.push_back(vector<Square>());
      for(int j=0; j<COLS; j++) {
         pieces[i].push_back(Square(i,j));
      }
   }
      
   //Everything is constructed, now let's link neighbors. This could have
   //been done during Square construction, but it's clearer to do it separately.
   for(int i=0; i<ROWS; i++) {
      for(int j=0; j<COLS; j++) {
      
         if(i>0)
            pieces[i][j].neighbors.insert(make_pair(N, &pieces[i-1][j]));
         
         if(j>0)
            pieces[i][j].neighbors.insert(make_pair(W, &pieces[i][j-1]));
         
         if(i != ROWS-1)
            pieces[i][j].neighbors.insert(make_pair(S, &pieces[i+1][j]));
         
         if(j != COLS-1)
            pieces[i][j].neighbors.insert(make_pair(E, &pieces[i][j+1]));
         
         if(i>0 && j>0)
            pieces[i][j].neighbors.insert(make_pair(NW, &pieces[i-1][j-1]));
         
         if(i != ROWS-1 && j>0)
            pieces[i][j].neighbors.insert(make_pair(SW, &pieces[i+1][j-1]));
         
         if(i>0 && j != COLS-1)
            pieces[i][j].neighbors.insert(make_pair(NE, &pieces[i-1][j+1]));
         
         if(i != ROWS-1 && j != COLS-1)
            pieces[i][j].neighbors.insert(make_pair(SE, &pieces[i+1][j+1]));
         
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

