//
//  PlanetSimulation.h
//  my2DGraphics
//
//  Created by CHANT-MAC on 2015. 7. 22..
//
//

#ifndef __my2DGraphics__PlanetSimulation__
#define __my2DGraphics__PlanetSimulation__

#include <stdio.h>
#include "ofMain.h"
#include "Shape.h"

class PlanetSimulation{
public:
    PlanetSimulation();
    ~PlanetSimulation();
    
    void Init(int shapeNum);
    
    void SetMousePos(ofPoint mousePos){mMousePos = mousePos;}
    void AddShape();
    
    void Update();
    void Draw();
    
protected:
    int mShapeNum;
    std::vector<Shape*> mShapeList;
    ofPoint mMousePos;
};


#endif /* defined(__my2DGraphics__PlanetSimulation__) */
