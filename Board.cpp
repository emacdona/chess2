/* 
 * File:   Board.cpp
 * Author: emacdona
 * 
 * Created on February 20, 2012, 1:06 PM
 */

#include "Board.h"
#include <iostream>

using namespace std;

Board::Board() {
   numberOfSquaresConstructed = 0;
#ifdef DEBUG
   cout << "Constructing Board" << endl;
#endif
   for(int i=0; i<8; i++) {
      board.push_back(new vector<Square*>());
      for(int j=0; j<8; j++) {
         board[i]->push_back(new Square());
         numberOfSquaresConstructed++;
      }
   }
}

Board::Board(const Board& orig) {
}

Board::~Board() {
#ifdef DEBUG
   cout << "Destructing Board" << endl;
#endif
   vector<vector<Square*>* >::iterator i;
   vector<Square*>::iterator j;

   for( i = board.begin(); i != board.end(); i++ ) {
      for( j = (*i)->begin(); j != (*i)->end(); j++ ) {
         delete(*j);
      }
      delete(*i);
   }
}

