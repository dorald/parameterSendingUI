//
//  dudClass.cpp
//  parameterSendingUI
//
//  Created by lewis lepton on 3/7/15.
//
//

#include "dudClass.h"

void dudClass::setup() {
    //here we setup and add them to our .cpp
    //this gives the UI a title name
    params.setName("Something Params");
    //this is setting for the X
    params.add(pA.set("Param A", 0, 0, 600));
    
    //this is setting for the Y
    params.add(pB.set("Param B", 0, 0, 300));
}

void dudClass::draw(){
    //this can be replaced with any other type of control. a rectangle seemed to most easiest to work with
    //here we are simply making the rectangle white
    ofSetColor(255);
    //this is setting the parametners from the setup to our X and Y
    ofRect(pA, pB, 100, 100);
}

ofParameterGroup dudClass::getParams() {
    //we have to return the params
    return params;
}