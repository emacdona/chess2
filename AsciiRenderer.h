/* 
 * File:   AsciiRenderer.h
 * Author: emacdona
 *
 * Created on February 26, 2012, 7:54 PM
 */

#ifndef ASCIIRENDERER_H
#define	ASCIIRENDERER_H

#include "AsciiRenderable.h"
#include "UniformBoxAsciiRenderable.h"
#include <vector>
#include <string>
#include <boost/shared_ptr.hpp>

using namespace std;
using boost::shared_ptr;

namespace chess {
namespace rendering {

class UniformBoxAsciiRenderer {
public:
   UniformBoxAsciiRenderer( AsciiRenderableGrid _uniformBoxRenderables );
   UniformBoxAsciiRenderer(const UniformBoxAsciiRenderer& orig);
   virtual ~UniformBoxAsciiRenderer();
   string render();
private:
   vector<vector<shared_ptr<AsciiRenderable> > > uniformBoxRenderables;
};

}}
using namespace chess::rendering;

#endif	/* ASCIIRENDERER_H */

