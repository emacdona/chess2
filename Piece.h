/* 
 * File:   Piece.h
 * Author: emacdona
 *
 * Created on February 20, 2012, 1:05 PM
 */

#ifndef PIECE_H
#define	PIECE_H

namespace chess {
namespace piece {
   
class Piece {
   public:
      Piece();
      Piece(const Piece& orig);
      virtual ~Piece();
      void setMoved();
      bool hasMoved();
   private:
      bool moved;
};

}}

using namespace chess::piece;

#endif	/* PIECE_H */

