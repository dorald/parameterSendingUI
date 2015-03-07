//
//  parameterSendingUI
//
//  Created by lewis lepton on 3/7/15.
//
//
/* simple example to show using a UI to 'talk' to send parameter to setting in classes.
 in this example we move a white rectangle around the screen using ofxGui.
 this can easily be extended, but just wanted to give the most basic example */
/* special thanks to adam carlucci for helping with explaining it to me ;)*/

#pragma once

#include "ofMain.h"
#include "ofxGui.h"

#include "dudClass.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void draw();
    
    //here we setup our UI
    ofxFloatSlider movement;
    ofxPanel panel;
    
    //this is calling in our parameter from the dudClass
    dudClass dudParams;
};
