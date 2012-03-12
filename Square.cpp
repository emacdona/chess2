/* 
 * File:   Square.cpp
 * Author: emacdona
 * 
 * Created on February 20, 2012, 1:28 PM
 */

#include "Square.h"
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

unsigned int Square::timesConstructorCalled = 0;
unsigned int Square::timesCopyConstructorCalled = 0;
unsigned int Square::timesDestructorCalled = 0;

Square::Square() {
   imACopy = false;
   timesConstructorCalled++;
}

Square::Square(unsigned int x, unsigned int y) {
   imACopy = false;
   timesConstructorCalled++;
   coordinates = make_pair(x, y);
}

Square::Square(pair<unsigned int,unsigned int> p) {
   imACopy = false;
   timesConstructorCalled++;
   coordinates = p;
}

Square::Square(const Square& orig) {
   imACopy = true;
   timesCopyConstructorCalled++;
   coordinates = orig.coordinates;
}

Square::~Square() {
   timesDestructorCalled++;
#ifdef _DEBUG
   if(imACopy){
      cout << "I am a copy" << endl;
   }
   else {
      cout << "I am NOT NOT NOT a copy" << endl;
   }
#endif
}

void Square::setPiece(Piece* p) {
   piece = p;
}

Piece* Square::getPiece() {
   return piece;
}

string Square::asciiRender() {
   ostringstream s;
   
   s << "(" << coordinates.first << ", " << coordinates.second << ")";
   
   return s.str();
}

pair<pair<unsigned int, unsigned int>, vector<string> > Square::getLinesForAsciiRender(){
   vector<string> strings;
   ostringstream s;

   s << squareCoordinates(this->neighbors[NW]) << ' '  
     << squareCoordinates(this->neighbors[N])  << ' '
     << squareCoordinates(this->neighbors[NE]);
   strings.push_back(s.str());
   s.clear(); s.str("");

   s << squareCoordinates(this->neighbors[W]) << ' '  
     << "<" << this->coordinates.first << "," << this->coordinates.second << "> "
     << squareCoordinates(this->neighbors[E]);
   strings.push_back(s.str());
   s.clear(); s.str("");

   s << squareCoordinates(this->neighbors[SW]) << ' '  
     << squareCoordinates(this->neighbors[S])  << ' '
     << squareCoordinates(this->neighbors[SE]);
   strings.push_back(s.str());
   s.clear(); s.str("");

   return make_pair<pair<unsigned int, unsigned int> , vector<string> > (
      make_pair<unsigned int, unsigned int>(strings.size(), strings[0].size()), 
      strings
   );
}

string Square::squareCoordinates(shared_ptr<Square> s){
    if(s){
      ostringstream ss;
      ss << "(" << s->coordinates.first << "," << s->coordinates.second << ")";
      return ss.str();
    }
    else{
      return string("(-,-)");
    }
}