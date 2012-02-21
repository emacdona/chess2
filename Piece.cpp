/* 
 * File:   Piece.cpp
 * Author: emacdona
 * 
 * Created on February 20, 2012, 1:05 PM
 */

#include "Piece.h"

Piece::Piece() {
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
