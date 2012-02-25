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
   imACopy = false;
   timesConstructorCalled++;
}

Square::Square(unsigned int x, unsigned int y) {
   imACopy = false;
   timesConstructorCalled++;
   coordinates = make_pair(x, y);
}

Square::Square(pair<unsigned int,unsigned int> p) {
   imACopy = false;
   timesConstructorCalled++;
   coordinates = p;
}

Square::Square(const Square& orig) {
   imACopy = true;
   timesCopyConstructorCalled++;
}

Square::~Square() {
   timesDestructorCalled++;
#ifdef _DEBUG
   if(imACopy){
      cout << "I am a copy" << endl;
   }
   else {
      cout << "I am NOT NOT NOT a copy" << endl;
   }
#endif
}

void Square::setPiece(Piece* p) {
   piece = p;
}

Piece* Square::getPiece() {
   return piece;
}