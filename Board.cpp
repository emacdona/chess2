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
   cout << "Constructing Board" << endl;
   for(int i=0; i<8; i++) {
      board.push_back(new vector<Square*>());
      for(int j=0; j<8; j++) {
         board[i]->push_back(new Square());
      }
   }
}

Board::Board(const Board& orig) {
}

Board::~Board() {
   cout << "Destructing Board" << endl;
   for(vector<vector<Square*> >*)
}

