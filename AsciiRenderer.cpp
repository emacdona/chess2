/* 
 * File:   AsciiRenderer.cpp
 * Author: emacdona
 * 
 * Created on February 26, 2012, 7:54 PM
 */

#include "AsciiRenderer.h"
#include <assert.h>
#include <sstream>
#include <boost/shared_ptr.hpp>
#include <boost/make_shared.hpp>

using boost::make_shared;
using boost::shared_ptr;

UniformBoxAsciiRenderer::UniformBoxAsciiRenderer( 
	AsciiRenderableGrid _uniformBoxRenderables ) {

    AsciiRenderableGrid::iterator i;
    AsciiRenderableRow::iterator j;

   unsigned int rows = 0;
   unsigned int cols = 0;
   unsigned int boxes = 0;
   bool first = true;

   for( i = uniformBoxRenderables.begin(); i != uniformBoxRenderables.end(); i++ ) {
	   for( j = i->begin() ; j != i->end(); j++ ) {
	      pair<unsigned int, unsigned int> p = 
		      (*j)->getLinesForAsciiRender().first;

	      if(!first) {
		      assert ( 
               (rows == p.first) && 
               (cols == p.second) &&
               (boxes == (*j)->getLinesForAsciiRender().second.size())
            );
	      }

         boxes = (*j)->getLinesForAsciiRender().second.size();
	      first = false;
	      rows = p.first;
	      cols = p.second;
	   }
   }

   uniformBoxRenderables = _uniformBoxRenderables;
}

UniformBoxAsciiRenderer::UniformBoxAsciiRenderer(const UniformBoxAsciiRenderer& orig) {
}

UniformBoxAsciiRenderer::~UniformBoxAsciiRenderer() {
}

string UniformBoxAsciiRenderer::render() {
   ostringstream s;

   AsciiRenderableGrid::iterator i;
   AsciiRenderableRow::iterator  j;
   int l;

   int rows, columns;
   vector<string> strings;
   bool rowInProgress = false;

   //for every row of AsciiRenderables
   for( i = uniformBoxRenderables.begin(); i != uniformBoxRenderables.end(); i++ ) {
      vector<shared_ptr<ostringstream> > stringstreams;

      //for every column (for every AsciiRenderable)
      for( j = i->begin() ; j != i->end(); j++ ) {
         rows     = (*j)->getLinesForAsciiRender().first.first;
         columns  = (*j)->getLinesForAsciiRender().first.second;
         strings  = (*j)->getLinesForAsciiRender().second;

         //each square has its own rows; create buffers to hold their contents
         if(!rowInProgress) {
             for(int k = 0; k < rows + 1; k++) {
               stringstreams.push_back(make_shared<ostringstream>());
             }
            rowInProgress = true;
         }

         *(stringstreams.at(0)) << string(columns, '_');

         if( (j+1) != i->end()) {
            *(stringstreams.at(0)) << string(3, '_');
         }

         //for each row of this renderable square, put its contents in the
         //corresponding buffer
         for(l = 0; l < strings.size(); l++) {
            *(stringstreams.at(l+1)) << strings.at(l);
            if( (j+1) != i->end()) {
               *(stringstreams.at(l+1)) << " | ";
            }
         }
	   }

      //add all the buffers to the final output
      for(vector<shared_ptr<ostringstream> >::iterator itr = stringstreams.begin(); 
          itr != stringstreams.end(); itr++ ) {
          s << "| " << (*itr)->str() << " |" << endl;
      }
      rowInProgress = false;
   }

   s << "| "    
                /* width of all columns but one */
     << string( (columns + 3) * (uniformBoxRenderables.size() - 1) +
                /* width of last column */
                columns, '_') 
     << " |" << endl;


   return s.str(); 
}