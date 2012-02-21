/* 
 * File:   Queen.h
 * Author: emacdona
 *
 * Created on February 20, 2012, 1:06 PM
 */

#ifndef QUEEN_H
#define	QUEEN_H

#include "Piece.h"

namespace chess {
namespace piece {

class Queen: public Piece {
public:
    Queen();
    Queen(const Queen& orig);
    virtual ~Queen();
private:

};

}}

#endif	/* QUEEN_H */

