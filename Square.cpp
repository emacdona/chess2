/* 
 * File:   Square.cpp
 * Author: emacdona
 * 
 * Created on February 20, 2012, 1:28 PM
 */

#include "Square.h"
#include <iostream>

using namespace std;

Square::Square() {
   cout << "Constructing Square" << endl;
}

Square::Square(const Square& orig) {
}

Square::~Square() {
   cout << "Destructing Square" << endl;
}

