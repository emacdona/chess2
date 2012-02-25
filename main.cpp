/* 
 * File:   main.cpp
 * Author: emacdona
 *
 * Created on February 20, 2012, 1:05 PM
 */

#include <cstdlib>
#include <iostream>
#include "Board.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
   Board board = Board();

      
   cout << "Times Square constructor called: "
        << Square::timesConstructorCalled << endl;
   
   cout << "Times Square copy constructor called: "
        << Square::timesCopyConstructorCalled << endl;
   
   cout << "Times Square destructor called: "
        << Square::timesDestructorCalled << endl;
   
   return 0;
}

