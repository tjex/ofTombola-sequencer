#pragma once

#include "ofMain.h"
#include "ofTombola.hpp"
#include "ofBall.hpp"
#include "ofxBox2d.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
    ofTombola tombola;
    //ofBall ball;
    //vector <ofBall> ballsVector;
  
    ofxBox2d box2d;
    
    // make an array ofxBox2dCircle class pointers 
    vector <shared_ptr<ofxBox2dCircle> > circles;
    
    
};
