/* 
 * File:   main.cpp
 * Author: emacdona
 *
 * Created on February 20, 2012, 1:05 PM
 */

#include <cstdlib>
#include <iostream>
#include "Board.h"
#include "AsciiRenderer.h"

using namespace std;

/*
 * 
 */
int myMain(int argc, char** argv);

int main(int argc, char** argv) {

   int retVal = myMain(argc, argv);
   
   /*
   cout << "Times Square constructor called: "
        << Square::timesConstructorCalled << endl;
   
   cout << "Times Square copy constructor called: "
        << Square::timesCopyConstructorCalled << endl;
   
   cout << "Times Square destructor called: "
        << Square::timesDestructorCalled << endl;
   */
   
   return retVal;
}

int myMain(int argc, char** argv) {
   Board board = Board();
   
   //cout << endl << board.asciiRender() << endl;
     
   //cout << board.pieces[1][1]->neighbors[S]->coordinates.second << endl;

   UniformBoxAsciiRenderer ubar(board.getUniformAsciiRenderableGrid());

   //cout << endl << "Rendering:" << endl;
   cout << endl << ubar.render() << endl;
           
   return 0;
}