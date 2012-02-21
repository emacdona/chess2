/* 
 * File:   Pawn.h
 * Author: emacdona
 *
 * Created on February 20, 2012, 1:11 PM
 */

#ifndef PAWN_H
#define	PAWN_H

#include "Piece.h"

namespace chess {
namespace piece {
      

class Pawn: public Piece {
public:
    Pawn();
    Pawn(const Pawn& orig);
    virtual ~Pawn();
private:

};

}}

#endif	/* PAWN_H */

