/* 
 * File:   Square.h
 * Author: emacdona
 *
 * Created on February 20, 2012, 1:28 PM
 */

#ifndef SQUARE_H
#define	SQUARE_H

#include<map>
#include "Piece.h"

using namespace std;

namespace chess {
namespace board{

enum direction { N, NE, E, SE, S, SW, W, NW };
      
class Square {
public:
   Square();
   Square(const Square& orig);
   virtual ~Square();
   
   void setPiece(Piece p);
   Piece getPiece();

   map<direction, Square*> neighbors;
   
   static unsigned int timesConstructorCalled;
   static unsigned int timesCopyConstructorCalled;
   static unsigned int timesDestructorCalled;
   
private:
   Piece piece;
};

}}

using namespace chess::board;

#endif	/* SQUARE_H */

