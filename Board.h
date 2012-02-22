/* 
 * File:   Board.h
 * Author: emacdona
 *
 * Created on February 20, 2012, 1:06 PM
 */

#ifndef BOARD_H
#define	BOARD_H

#include <vector>
#include "Square.h"
#include "Piece.h"

namespace chess {
namespace board {

using namespace std;
class Board {
public:
   Board();
   Board(const Board& orig);
   virtual ~Board();
   unsigned int numberOfSquaresConstructed;
private:
   vector<vector<Square*>* > board;
   Piece piece;
};

}}

using namespace chess::board;

#endif	/* BOARD_H */

