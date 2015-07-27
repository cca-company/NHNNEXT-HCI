//
//  Shape.cpp
//  my2DGraphics
//
//  Created by CHANT-MAC on 2015. 7. 22..
//
//

#include "Shape.h"

Shape::Shape(){
    
}

Shape::~Shape()
{
    
}

void Shape::Init()
{
    SetColor( ofColor(ofRandom(100,255),ofRandom(70,225),ofRandom(100,255)));
    SetDistance(ofRandom(50,400));
    SetShape((ShapeType)ofRandom(ST_MAXLENGTH));
    SetSpeed(ofRandom(1,5));
    SetAngle(ofRandom(360));
    SetSize(ofRandom(10,30));
}

void Shape::Move()
{
    SetAngle(mAngle+mSpeed);
}

void Shape::Draw()
{
    ofSetColor(mColor);
    
    ofPushMatrix();
    ofRotate(mAngle);
    ofTranslate(0,mDistance);
    
    switch (mShape) {
        case ST_CIRCLE:
            ofCircle(ofPoint(0,0),mSize);
            break;
        case ST_SQUARE:
            ofRect(ofPoint(0,0), mSize, mSize);
            break;
        case ST_TRIANGLE:
            ofTriangle(ofPoint(0,0),
                       ofPoint(mSize * cos(ofDegToRad(60)),mSize * sin(ofDegToRad(60))),
                       ofPoint(-mSize * cos(ofDegToRad(60)), mSize * sin(ofDegToRad(60))));
            break;
            
        default:
            break;
    }
    
    ofPopMatrix();
}
