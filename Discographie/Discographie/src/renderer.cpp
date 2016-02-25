#include "renderer.h"


//Constructeur
Renderer::Renderer()
{
	//Initialise les objets image
	imageHG = nullptr;
	imageHD = nullptr;
	imageBG = nullptr;
	imageDG = nullptr;
}

void Renderer::setup()
{
	//120hz master*
	ofSetFrameRate(120);

	//Load les textures
}
void Renderer::draw()
{
	//Fetch de la resolution
	int x = ofGetWidth();
	int y = ofGetHeight();

	//Draw
}

void Renderer::Import(const string file, ofImage *& Destination)
{
}

void Renderer::Export(const string file, const string encoding) const
{
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
