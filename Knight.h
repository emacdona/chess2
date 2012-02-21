/* 
 * File:   Knight.h
 * Author: emacdona
 *
 * Created on February 20, 2012, 1:11 PM
 */

#ifndef KNIGHT_H
#define	KNIGHT_H

#include "Piece.h"

namespace chess {
namespace piece {

class Knight: public Piece {
public:
    Knight();
    Knight(const Knight& orig);
    virtual ~Knight();
private:

};

}}

#endif	/* KNIGHT_H */

