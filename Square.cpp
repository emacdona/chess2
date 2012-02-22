/* 
 * File:   Square.cpp
 * Author: emacdona
 * 
 * Created on February 20, 2012, 1:28 PM
 */

#include "Square.h"
#include <iostream>

using namespace std;

Square::Square() {
#ifdef DEBUG
   cout << "Constructing Square" << endl;
#endif
}

Square::Square(const Square& orig) {
}

Square::~Square() {
#ifdef DEBUG
   cout << "Destructing Square" << endl;
#endif
}

void Square::setPiece(Piece p) {
   piece = p;
}

Piece Square::getPiece() {
   return piece;
}