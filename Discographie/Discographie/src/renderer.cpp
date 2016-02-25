#include "renderer.h"


Renderer::Renderer()
{

	imageHG = nullptr;
	imageHD = nullptr;
	imageBG = nullptr;
	imageDG = nullptr;

	verticalOffset = (ofGetWidth() / 100);
	horizontalOffset = (ofGetHeight() / 100);

	// resize des images 
	//	X = width - (offset * 3) /2
	imageWidth = (ofGetWidth() - (horizontalOffset * 3)) / 2;
	imageHeight = (ofGetHeight() - (verticalOffset * 3)) / 2;


}

void Renderer::setup()
{
	//120hz master*
	ofSetFrameRate(120);
	
	//Import
	Import("ODESZA_01.jpg", imageHG);
	Import("ODESZA_02.jpg", imageHD);
	Import("chainesmokers_01.jpg", imageBG);
	Import("Purity_01.jpg", imageDG);

}

void Renderer::draw()
{	
	// dessin TOP LEFT
	imageHG->draw(
		horizontalOffset,
		verticalOffset, 
		imageWidth, 
		imageHeight);

	// dessin TOP RIGHT
	imageHD->draw(
		imageWidth + (horizontalOffset *2),
		verticalOffset,
		imageWidth,
		imageHeight);

	// dessin BOT LEFT
	imageBG->draw(
		horizontalOffset,
		imageHeight + (verticalOffset * 2),
		imageWidth,
		imageHeight);

	// dessin BOT RIGHT
	imageDG->draw(
		imageWidth + (horizontalOffset * 2),
		imageHeight + (verticalOffset * 2),
		imageWidth,
		imageHeight);
}

void Renderer::resize()
{
	// Recalcul du windows size
	imageWidth = (ofGetWidth() - (horizontalOffset * 3)) / 2;
	imageHeight = (ofGetHeight() - (verticalOffset * 3)) / 2;

	// redraw des images avec la nouvelle dimension
	draw();
}

void Renderer::Import(const string file, ofImage * & Destination)
{
	// Validation
	if (Destination != nullptr)
	{
		delete Destination;
	}

	// Nouvelle instance de OfImage->load
	Destination = new ofImage;
	Destination->load(file);


}

void Renderer::Export(const string file, const string extension) const
{
	ofImage imageTemp;

	string ts = ofGetTimestampString("-%y%m%d-%H%M%S-%i");
	string fileName = file + ts + "." + extension;

	imageTemp.grabScreen(0, 0, ofGetWindowWidth(), ofGetWindowHeight());

	imageTemp.save(fileName);
}

Renderer::~Renderer()
{
	//imageHG; imageHD; imageBG; imageDG;
	if(nullptr != imageHG)
		delete imageHG;

	if (nullptr != imageHD)
		delete imageHD;

	if (nullptr != imageBG)
		delete imageBG;

	if (nullptr != imageDG)
		delete imageDG;
}
