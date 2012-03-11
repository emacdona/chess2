/* 
 * File:   UniformBoxAsciiRenderable.h
 * Author: emacdona
 *
 * Created on March 3, 2012, 2:56 PM
 */

#ifndef UNIFORMBOXASCIIRENDERABLE_H
#define	UNIFORMBOXASCIIRENDERABLE_H

#include "AsciiRenderable.h"
#include <boost/shared_ptr.hpp>

using boost::shared_ptr;

namespace chess{
namespace rendering{

typedef vector<vector<shared_ptr<AsciiRenderable> > > AsciiRenderableGrid;
typedef vector<shared_ptr<AsciiRenderable> > AsciiRenderableRow;

class UniformBoxAsciiRenderable {
public:
    UniformBoxAsciiRenderable();
    UniformBoxAsciiRenderable(const UniformBoxAsciiRenderable& orig);
    virtual ~UniformBoxAsciiRenderable();
    virtual AsciiRenderableGrid getUniformAsciiRenderableGrid() = 0;
private:

};

}}

#endif	/* UNIFORMBOXASCIIRENDERABLE_H */

