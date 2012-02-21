/* 
 * File:   Rook.h
 * Author: emacdona
 *
 * Created on February 20, 2012, 1:12 PM
 */

#ifndef ROOK_H
#define	ROOK_H

#include "Piece.h"

namespace chess {
namespace piece {
   
class Rook: public Piece {
public:
    Rook();
    Rook(const Rook& orig);
    virtual ~Rook();
private:

};

}}

#endif	/* ROOK_H */

