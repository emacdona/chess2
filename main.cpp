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
   Board* board = new Board();
   
   cout << "Hello World" << endl;
   
   delete(board);
   
   return 0;
}

