//
//  dudClass.h
//  parameterSendingUI
//
//  Created by lewis lepton on 3/7/15.
//
//

#ifndef __parameterSendingUI__dudClass__
#define __parameterSendingUI__dudClass__

#include "ofMain.h"

class dudClass{
public:
    void setup();
    void draw();
    
    //we use ofParameterGroup storing params
    ofParameterGroup getParams();
    
    //we set a private which will deal with the params and also name them. later to be called in setup();
private:
    ofParameterGroup params;
    ofParameter<float> pA;
    ofParameter<float> pB;
};

#endif /* defined(__parameterSendingUI__dudClass__) */