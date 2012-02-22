/* 
 * File:   Square.h
 * Author: emacdona
 *
 * Created on February 20, 2012, 1:28 PM
 */

#ifndef SQUARE_H
#define	SQUARE_H

#include "Piece.h"

namespace chess {
namespace board{

class Square {
public:
   Square();
   Square(const Square& orig);
   virtual ~Square();
   
   void setPiece(Piece p);
   Piece getPiece();

   //Square *n, *ne, *e, *se, *s, *sw, *w, *nw;
   
   enum direction { n, ne, e, se, s, sw, w, nw };
   
private:
   Piece piece;
};

}}

using namespace chess::board;

#endif	/* SQUARE_H */

