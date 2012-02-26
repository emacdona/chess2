/* 
 * File:   Piece.cpp
 * Author: emacdona
 * 
 * Created on February 20, 2012, 1:05 PM
 */

#include "Piece.h"
#include <iostream>
#include <sstream>

using namespace std;

Piece::Piece() {
   moved = false;
   cout << "Piece() called" << endl;
}

Piece::Piece(const Piece& orig) {
}

Piece::~Piece() {
}

void Piece::setMoved() {
   moved = true;
}

bool Piece::hasMoved() {
   return moved;
}
