//
//  Shape.h
//  my2DGraphics
//
//  Created by CHANT-MAC on 2015. 7. 22..
//
//

#ifndef my2DGraphics_Shape_h
#define my2DGraphics_Shape_h

#include <stdio.h>
#include "ofMain.h"

enum ShapeType{
    ST_CIRCLE = 0,
    ST_TRIANGLE = 1,
    ST_SQUARE = 2,
    
    ST_MAXLENGTH = 3,
};

class Shape{
public:
    Shape();
    virtual ~Shape();
    
    void Init();
    void SetColor(ofColor color){ mColor = color;}
    void SetSize(float size){ mSize = size;}
    void SetShape(ShapeType shape){ mShape = shape;}
    void SetSpeed(float speed){ mSpeed = speed;}
    void SetDistance(float distance){ mDistance = distance;}
    void SetAngle(float angle){ mAngle = (angle < 360 )?angle:angle-360;}
    void SetPosition(float x, float y);
    
    void Move();
    void Draw();
    
protected:
    ofColor mColor;
    ofPoint mPosition;
    float mSize;
    ShapeType mShape;
    float mSpeed;
    float mDistance;
    float mAngle;
};

#endif
