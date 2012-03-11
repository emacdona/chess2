/* 
 * File:   Board.h
 * Author: emacdona
 *
 * Created on February 20, 2012, 1:06 PM
 */

#ifndef BOARD_H
#define	BOARD_H

#include <vector>
#include <string>
#include "Square.h"
#include "Piece.h"
#include <boost/shared_ptr.hpp>
#include "UniformBoxAsciiRenderable.h"

namespace chess {
namespace board {

using namespace std;
using boost::shared_ptr;

class Board : public UniformBoxAsciiRenderable{
public:
   Board();
   Board(const Board& orig);
   virtual ~Board();
   AsciiRenderableGrid getUniformAsciiRenderableGrid();
   
   string asciiRender();
   
   vector<vector<shared_ptr<Square> > > pieces;
   
private:

};

}}

using namespace chess::board;

#endif	/* BOARD_H */

