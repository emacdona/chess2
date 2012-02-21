/* 
 * File:   Square.h
 * Author: emacdona
 *
 * Created on February 20, 2012, 1:28 PM
 */

#ifndef SQUARE_H
#define	SQUARE_H

namespace chess {
namespace board{

class Square {
public:
   Square();
   Square(const Square& orig);
   virtual ~Square();
private:

};

}}

using namespace chess::board;

#endif	/* SQUARE_H */

