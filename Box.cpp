#include "Box.h"


// Default constructor
Box::Box()
{
	ID = 0;
	ptrID = &ID;
	width = 0;
	length = 0;
	height = 0;
}

// Initialization constructor 1
Box::Box(int inputID)
{
	ID = inputID;
	ptrID = &ID;
	width = 0;
	length = 0;
	height = 0;
}

// Initialization constructor 2
Box::Box(int inputID, int inputWidth, int inputLength, int inputHeight)
{
	ID = inputID;
	ptrID = &ID;
	width = inputWidth;
	length = inputLength;
	height = inputHeight;
}

Box::~Box()
{
	
}

// Returns the volume of the box
// Width x Length x Height
int Box::getVolume()
{
	return length*width*height;
}

// Returns the surface area of the box
// Widht x Length x 6(number of sides)
int Box::getSurfaceArea()
{
	return length*width*6;
}

// Returns the ID of the box
int Box::getID()
{
	return ID;
}
	
// Returns the width of the box
int Box::getWidth()
{
	return width;
}

// Returns the length of the box
int Box::getLength()
{
	return length;
}

// Returns the height of the box
int Box::getHeight()
{
	return height;
}

// Sets all 3 dimensions of the box
void Box::setDimensions(int newWidth, int newLength, int newHeight)
{
	// Since I already have functions that set the member variables
	// I should call those functions instead of rewriting code
	setWidth(newWidth);
	setLength(newLength);
	setHeight(newHeight);
}

// Sets the width of the box to newWidth
void Box::setWidth(int newWidth)
{
	width = newWidth;
}

// Sets the length of the box to newLength
void Box::setLength(int newLength)
{
	length = newLength;
}

// Sets the height of the box to newHeight
void Box::setHeight(int newHeight)
{
	height = newHeight;
}

