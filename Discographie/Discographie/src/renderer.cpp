#include "renderer.h"


Renderer::Renderer()
{

	imageHG = nullptr;
	imageHD = nullptr;
	imageBG = nullptr;
	imageDG = nullptr;

	imageWidth = ofGetWidth();
	imageHeight = ofGetHeight();
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
	imageHG->draw(0, 0, imageWidth / 2, imageHeight / 2);
	imageHD->draw(imageWidth /2, 0, imageWidth / 2, imageHeight / 2);
	imageBG->draw(imageWidth /2, imageHeight / 2, imageWidth / 2, imageHeight / 2);
	imageDG->draw(0, imageHeight / 2, imageWidth / 2, imageHeight / 2);
}

void Renderer::resize()
{
	imageWidth = ofGetWidth();
	imageHeight = ofGetHeight();

	draw();
}

void Renderer::Import(const string file, ofImage * & Destination)
{
	//null ?
	if (Destination != nullptr)
	{
		ofLog() << "<delete image: " << Destination << ">";
		delete Destination;
	}

	//Nouvelle instance de OfImage
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
