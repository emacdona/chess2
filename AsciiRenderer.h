/* 
 * File:   AsciiRenderer.h
 * Author: emacdona
 *
 * Created on February 26, 2012, 7:54 PM
 */

#ifndef ASCIIRENDERER_H
#define	ASCIIRENDERER_H

#include "AsciiRenderable.h"
#include <vector>
#include <string>

using namespace std;

namespace chess {
namespace rendering {

typedef vector<vector<AsciiRenderable*> > AsciiRenderableGrid;
typedef vector<AsciiRenderable*> AsciiRenderableRow;

class UniformBoxAsciiRenderer {
public:
   UniformBoxAsciiRenderer( AsciiRenderableGrid _uniformBoxRenderables );
   UniformBoxAsciiRenderer(const UniformBoxAsciiRenderer& orig);
   virtual ~UniformBoxAsciiRenderer();
   string render();
private:
   AsciiRenderableGrid uniformBoxRenderables;
};

}}
using namespace chess::rendering;

#endif	/* ASCIIRENDERER_H */

