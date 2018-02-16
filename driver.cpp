#include <iostream>
#include "Box.h"

int main()
{
	// Declare 2 new box objects on the heap
	Box* a = new Box(0);
	Box* b = new Box(1);

	// Print out the volumes of the boxes
	// We use the -> operator because a and b are pointers
	std::cout << "a->getVolume(): " << a->getVolume() << '\n';
	std::cout << "b->getVolume(): " << b->getVolume() << '\n';
	std::cout << '\n';
		
	// Make 2 new boxes on the stack
	Box c(2, 5, 6, 7);
	Box d(3, 8, 9, 10);

	// Print out the volumes of the boxes
	// We use the . operator because c and d are on the stack, not pointers
	std::cout << "c.getVolume(): " << c.getVolume() << '\n';
	std::cout << "c.getVolume(): " << d.getVolume() << '\n';
	std::cout << '\n';

	// Change the dimentions of the boxes
	a->setDimensions(4, 5, 6);
	b->setDimensions(6, 5, 4);

	// Print the dimensions, surface areas, and volumes
	std::cout << "Box a:" << '\n';
	std::cout << "\tWidth: " << a->getWidth() << '\n';
	std::cout << "\tLength: " << a->getLength() << '\n';
	std::cout << "\tHeight: " << a->getHeight() << '\n';
	std::cout << "\tSurface Area: " << a->getSurfaceArea() << '\n';
	std::cout << "\tVolume: " << a->getVolume() << '\n';

	std::cout << "Box b:" << '\n';
	std::cout << "\tWidth: " << b->getWidth() << '\n';
	std::cout << "\tLength: " << b->getLength() << '\n';
	std::cout << "\tHeight: " << b->getHeight() << '\n';
	std::cout << "\tSurface Area: " << b->getSurfaceArea() << '\n';
	std::cout << "\tVolume: " << b->getVolume() << '\n';

	std::cout << "Box c:" << '\n';
	std::cout << "\tWidth: " << c.getWidth() << '\n';
	std::cout << "\tLength: " << c.getLength() << '\n';
	std::cout << "\tHeight: " << c.getHeight() << '\n';
	std::cout << "\tSurface Area: " << c.getSurfaceArea() << '\n';
	std::cout << "\tVolume: " << c.getVolume() << '\n';

	std::cout << "Box d:" << '\n';
	std::cout << "\tWidth: " << d.getWidth() << '\n';
	std::cout << "\tLength: " << d.getLength() << '\n';
	std::cout << "\tHeight: " << d.getHeight() << '\n';
	std::cout << "\tSurface Area: " << d.getSurfaceArea() << '\n';
	std::cout << "\tVolume: " << d.getVolume() << '\n';

	
	// Delete all object we've made on the heap
	delete a;
	delete b;
	return 0;
}
