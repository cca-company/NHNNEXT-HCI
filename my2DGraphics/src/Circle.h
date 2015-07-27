//
//  Circle.h
//  my2DGraphics
//
//  Created by CHANT-MAC on 2015. 7. 22..
//
//

#ifndef __my2DGraphics__Circle__
#define __my2DGraphics__Circle__

#include <stdio.h>
#include "ofMain.h"
#include "Shape.h"

class Circle : public Shape{
public:
    Circle();
    virtual ~Circle();
    
    void Draw();
};



#endif /* defined(__my2DGraphics__Circle__) */
