/* 
 * File:   King.h
 * Author: emacdona
 *
 * Created on February 20, 2012, 1:12 PM
 */

#ifndef KING_H
#define	KING_H

#include "Piece.h"

namespace chess {
namespace piece {
   
class King: public Piece {
public:
    King();
    King(const King& orig);
    virtual ~King();
private:

};

}}

#endif	/* KING_H */

