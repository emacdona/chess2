/* 
 * File:   Board.cpp
 * Author: emacdona
 * 
 * Created on February 20, 2012, 1:06 PM
 */

#include "Board.h"
#include "Piece.h"
#include <iostream>
#include <sstream>
#include <utility>
#include <boost/shared_ptr.hpp>
#include <boost/make_shared.hpp>

using namespace std;

static const int ROWS = 8;
static const int COLS = 8;

Board::Board() {
   for(int i=0; i<ROWS; i++) {
      pieces.push_back(vector<shared_ptr<Square> >());
      for(int j=0; j<COLS; j++) {
         pieces[i].push_back(shared_ptr<Square>(new Square(i,j)));
      }
   }
      
   //Everything is constructed, now let's link neighbors. This could have
   //been done during Square construction, but it's clearer to do it separately.
   for(int i=0; i<ROWS; i++) {
      for(int j=0; j<COLS; j++) {  
         if(i>0)
            pieces[i][j]->neighbors[N] = pieces[i-1][j];
         
         if(j>0)
            pieces[i][j]->neighbors[W] = pieces[i][j-1];
         
         if(i != ROWS-1)
            pieces[i][j]->neighbors[S] = pieces[i+1][j];
         
         if(j != COLS-1)
            pieces[i][j]->neighbors[E] = pieces[i][j+1];
         
         if(i>0 && j>0)
            pieces[i][j]->neighbors[NW] = pieces[i-1][j-1];
         
         if(i != ROWS-1 && j>0)
            pieces[i][j]->neighbors[SW] = pieces[i+1][j-1];
         
         if(i>0 && j != COLS-1)
            pieces[i][j]->neighbors[NE] = pieces[i-1][j+1];
         
         if(i != ROWS-1 && j != COLS-1)
            pieces[i][j]->neighbors[SE] = pieces[i+1][j+1];
         
      }
   }
}

Board::Board(const Board& orig) {
}

Board::~Board() {
#ifdef _DEBUG
   cout << "Calling ~Board()" << endl;
#endif
}

string Board::asciiRender() {
   ostringstream s;
   
   for(int i=0; i<ROWS; i++) {
      for(int j=0; j<COLS; j++) {
         s << "| " << pieces[i][j]->asciiRender() << " ";
      }
      s << "|" << endl;
   }
   
   return s.str();
}

AsciiRenderableGrid Board::getUniformAsciiRenderableGrid(){
    AsciiRenderableGrid asciiRenderables;

    for(int i = 0; i < pieces.size(); i++){
        asciiRenderables.push_back(vector<shared_ptr<AsciiRenderable> >());
        for(int j = 0; j < pieces[i].size(); j++){
            asciiRenderables[i].push_back(pieces[i][j]);
        }
    }

    return asciiRenderables;
}
