//
//  PlanetSimulation.cpp
//  my2DGraphics
//
//  Created by CHANT-MAC on 2015. 7. 22..
//
//

#include "PlanetSimulation.h"


PlanetSimulation::PlanetSimulation()
{
    
}
PlanetSimulation::~PlanetSimulation()
{
    
}

void PlanetSimulation::Init(int shapeNum)
{
    mShapeNum = shapeNum;
    
    for(int i = 0; i < mShapeNum; ++i)
    {
        Shape* newShape = new Shape();
        newShape->Init();
        
        mShapeList.push_back(newShape);
    }
}

void PlanetSimulation::AddShape(){
    Shape* newShape = new Shape();
    newShape->Init();
    mShapeList.push_back(newShape);
    mShapeNum++;
}


void PlanetSimulation::Update()
{
    for(int i = 0; i < mShapeNum; ++i)
    {
        Shape* myShape = mShapeList.at(i);
        myShape->Move();
    }
}

void PlanetSimulation::Draw()
{
    ofPushMatrix();
    
    ofTranslate(mMousePos.x,mMousePos.y);
    
    for(int i = 0; i < mShapeNum; ++i)
    {
        Shape* myShape = mShapeList.at(i);
        myShape->Draw();
    }
    
    ofPopMatrix();
}