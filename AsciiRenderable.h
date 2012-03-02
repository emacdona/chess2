/* 
 * File:   AsciiRenderable.h
 * Author: emacdona
 *
 * Created on February 26, 2012, 7:47 PM
 */

#ifndef ASCIIRENDERABLE_H
#define	ASCIIRENDERABLE_H

#include <utility>
#include <vector>
#include <string>

using namespace std;

namespace chess {
namespace rendering {

class AsciiRenderable {
public:
    AsciiRenderable();
    AsciiRenderable(const AsciiRenderable& orig);
    virtual ~AsciiRenderable();

    /*
     * Returns a pair consisting of:
     * first: A pair defining the dimension of "second" in rows and columns
     * second: A vector of strings as "tall" and "wide" as first says it is.
     */
    virtual pair<pair<unsigned int, unsigned int>, vector<string> > 
    	getLinesForAsciiRender() = 0;

private:

};

}}
using namespace chess::rendering;

#endif	/* ASCIIRENDERABLE_H */

