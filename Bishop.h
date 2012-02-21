/* 
 * File:   Bishop.h
 * Author: emacdona
 *
 * Created on February 20, 2012, 1:08 PM
 */

#ifndef BISHOP_H
#define	BISHOP_H

#include "Piece.h"

namespace chess {
namespace piece {

class Bishop: public Piece {
public:
    Bishop();
    Bishop(const Bishop& orig);
    virtual ~Bishop();
private:

};

}}

#endif	/* BISHOP_H */

