/* 
 * File:   Square.h
 * Author: emacdona
 *
 * Created on February 20, 2012, 1:28 PM
 */

#ifndef SQUARE_H
#define	SQUARE_H

#include<map>
#include<utility>
#include "Piece.h"

using namespace std;

namespace chess {
namespace board{

enum direction { N, NE, E, SE, S, SW, W, NW };
      
class Square {
public:
   Square();
   Square(unsigned int x, unsigned int y);
   Square(pair<unsigned int, unsigned int> p);
   Square(const Square& orig);
   virtual ~Square();
   
   void setPiece(Piece* p);
   Piece* getPiece();

   map<direction, Square*> neighbors;
   
   static unsigned int timesConstructorCalled;
   static unsigned int timesCopyConstructorCalled;
   static unsigned int timesDestructorCalled;
   
   bool imACopy;
   
private:
   Piece* piece;
   pair<unsigned int, unsigned int> coordinates;
};

}}

using namespace chess::board;

#endif	/* SQUARE_H */

