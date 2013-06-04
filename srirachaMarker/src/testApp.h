#pragma once
#ifndef _TEST_APP
#define _TEST_APP

#include "ofMain.h"
#include "particle.h"
#include "ofxGifEncoder.h"

class testApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed  (int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
    
        ofPolyline stroke;
		vector < ofPolyline > lines;
		vector <particle> particles;
		float prevMouseX;
		float prevMouseY;
		
		float circx;
		float circy;
		float prevPtC;
		float rr;
		float RR;
		float dd;
		ofImage bg;
		
		void onGifSaved(string & fileName);
		void exit();
		void captureFrame();
		
		vector <ofTexture *> txs; // for previewing    
		vector <ofxGifFrame *> pxs;
		
		int frameW, frameH;
		int nFrames;
		
		ofVideoGrabber vid;
		vector <ofImage> frames;
		ofxGifEncoder gifEncoder;
};
#endif

