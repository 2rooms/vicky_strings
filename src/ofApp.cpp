#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){	 
	//ofBackground(54, 54, 54, 255);

	ofTrueTypeFont::setGlobalDpi(72);
    
    
    
	verdanaFont.loadFont("verdana.ttf", 15, true, true);
	verdanaFont.setLineHeight(18.0f);
	verdanaFont.setLetterSpacing(1.037);
    
    // san shape
    
    resize_verdana = 800;
    verdanaShape.loadFont("verdana.ttf", 20, true, false, true, 0.1);
    bColorChanged = false;
}

//--------------------------------------------------------------
void ofApp::update(){

   
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    //ofBackground(255);
    ofBackgroundHex(0x2b291e);
	
	//ofSetColor(225, 255, 255, ofGetMouseY()/3);
    if (bColorChanged){
        ofSetHexColor(0xb5e4f0); //return to black
    }else{
        ofSetHexColor(0xa8e2b5); //change to red
    }
   // myFont.drawString("helloworld", 50,50);
    
	verdanaFont.drawString("this would be a text from OSC message", 30, 35);
    
    //cam.begin();
    ofPushMatrix();
    ofTranslate(0, 0, -500+resize_verdana);
    verdanaShape.drawString("test as string/  ", ofGetWidth()/2 - 190, ofGetHeight()/2);
    verdanaShape.drawStringAsShapes("  /test_as shape!!", ofGetWidth()/2 + 20, ofGetHeight()/2);
    ofPopMatrix();
    
    ofPushMatrix();
    ofTranslate(100, 100, -800+resize_verdana);
    verdanaShape.drawString("test as string/  ", ofGetWidth()/2 - 190, ofGetHeight()/2);
    verdanaShape.drawStringAsShapes("  /test_as shape!!", ofGetWidth()/2 + 20, ofGetHeight()/2);
    ofPopMatrix();

    
    ofPushMatrix();
    ofTranslate(-100, -300, -1200+resize_verdana);
    verdanaShape.drawString("test as string/  ", ofGetWidth()/2 - 190, ofGetHeight()/2);
    verdanaShape.drawStringAsShapes("  /test_as shape!!", ofGetWidth()/2 + 20, ofGetHeight()/2);
    ofPopMatrix();

    
    ofPushMatrix();
    ofTranslate(200, 400, -1500+resize_verdana);
    verdanaShape.drawString("test as string/  ", ofGetWidth()/2 - 190, ofGetHeight()/2);
    verdanaShape.drawStringAsShapes("  /test_as shape!!", ofGetWidth()/2 + 20, ofGetHeight()/2);
    ofPopMatrix();

    
    ofPushMatrix();
    ofTranslate(-200, -500, -1800+resize_verdana);
    verdanaShape.drawString("test as string/  ", ofGetWidth()/2 - 190, ofGetHeight()/2);
    verdanaShape.drawStringAsShapes("  /test_as shape!!", ofGetWidth()/2 + 20, ofGetHeight()/2);
    ofPopMatrix();
    //cam.end();
	
}


//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
    if (key == 'c'){
        bColorChanged = !bColorChanged;
    }
  
    switch (key) {
            
            
         case OF_KEY_UP:
            resize_verdana += 10;
             break;
            
         case OF_KEY_DOWN:
            resize_verdana -= 10;
            break;
            
            
        default:
            break;
            
    }

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){ 
	
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
	
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
	
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
	
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
