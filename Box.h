#ifndef _BOX_H_
#define _BOX_H_

// CLASS BOX
class Box
{
	public:
		// Default constructor
		Box();

		// Initialization constructor
		Box(int);

		// Initialization constructor
		// ID, width, length height
		Box(int, int, int, int);

		// Destructor
		~Box();

		// Method that returns the volume of the box
		int getVolume();

		//Method that returns the surface area of the box
		int getSurfaceArea();

		// Getters for our member variables
		int getID();
		int getWidth();
		int getLength();
		int getHeight();

		// Setters for our member variables
		void setDimensions(int, int, int);
		void setWidth(int);
		void setLength(int);
		void setHeight(int);

	private:
		int ID;
		int* ptrID;
		int width;
		int length;
		int height;
};

#endif
