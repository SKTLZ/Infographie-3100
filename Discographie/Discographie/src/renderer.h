#pragma once

#include "ofMain.h"

class Renderer
{
	public:

		ofImage * imageHG;
		ofImage * imageHD;
		ofImage * imageBG;
		ofImage * imageDG;

		int imageWidth;
		int imageHeight;
		
		int verticalOffset;
		int horizontalOffset;

		Renderer();
		void setup();
		void draw();
		void resize();

		void Import(const string file, ofImage * & Destination);
		void Export(const string file, const string encoding) const;

		~Renderer();
};

