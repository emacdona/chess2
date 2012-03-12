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
#include "AsciiRenderable.h"
#include <boost/shared_ptr.hpp>

using namespace std;
using boost::shared_ptr;

namespace chess {
namespace board{

enum direction { N, NE, E, SE, S, SW, W, NW };
      
class Square : public AsciiRenderable {
public:
   Square();
   Square(unsigned int x, unsigned int y);
   Square(pair<unsigned int, unsigned int> p);
   Square(const Square& orig);
   virtual ~Square();
   
   void setPiece(Piece* p);
   Piece* getPiece();

   map<direction, shared_ptr<Square> > neighbors;
   
   static unsigned int timesConstructorCalled;
   static unsigned int timesCopyConstructorCalled;
   static unsigned int timesDestructorCalled;
   
   string asciiRender();
   pair<pair<unsigned int, unsigned int>, vector<string> > getLinesForAsciiRender();
   
   bool imACopy;
   pair<unsigned int, unsigned int> coordinates;
   
private:
   Piece* piece;
   string squareCoordinates(shared_ptr<Square> s);
};

}}

using namespace chess::board;

#endif	/* SQUARE_H */

