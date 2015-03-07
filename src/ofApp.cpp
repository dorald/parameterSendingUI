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

#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    //setup dudClass
    dudParams.setup();
    
    //setup up our UI
    panel.setup();
    
    //here we are calling in all our parameter from the dudClass
    panel.add(dudParams.getParams());
}

//--------------------------------------------------------------
void ofApp::draw(){
    //this is just simply drawing in the ofRect we made in dudClass
    dudParams.draw();
    
    //here we draw our UI which has our dudClass parameters
    panel.draw();
}
