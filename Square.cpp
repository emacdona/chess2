/* 
 * File:   Square.cpp
 * Author: emacdona
 * 
 * Created on February 20, 2012, 1:28 PM
 */

#include "Square.h"
#include <iostream>

using namespace std;

unsigned int Square::timesConstructorCalled = 0;
unsigned int Square::timesCopyConstructorCalled = 0;
unsigned int Square::timesDestructorCalled = 0;

Square::Square() {
   timesConstructorCalled++;
}

Square::Square(const Square& orig) {
   timesCopyConstructorCalled++;
}

Square::~Square() {
   timesDestructorCalled++;
}

void Square::setPiece(Piece p) {
   piece = p;
}

Piece Square::getPiece() {
   return piece;
}