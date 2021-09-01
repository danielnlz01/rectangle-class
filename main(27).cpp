#include <iostream>

#include "Rectangle.h"

using namespace std;

int main() 
{
	
	Rectangle *r = new Rectangle(); //creating new object
	
	cout << "Rectangle 1 " << endl;
	cout << "length: " << r->getLength() << endl;
	cout << "width: " << r->getWidth() << endl;
	r->setLength(3);
	r->setWidth(11);
	cout << "After Setters " << endl;
	cout << "length: " << r->getLength() << endl;
	cout << "width: " << r->getWidth() << endl;
	double p1 = r->calculatePerimeter();
	cout << "perimeter: " << p1 << endl;
	
	Rectangle *r2 = new Rectangle(10, 5); //creating new object
	
	cout << "Rectangle 2 " << endl;
	cout << "length: " << r2->getLength() << endl;
	cout << "width: " << r2->getWidth() << endl;
	double p2 = r2->calculatePerimeter();
	cout << "perimeter: " << p2 << endl;
	
	Rectangle *r3 = new Rectangle();
	cout << "\n\nRectangle 3 " << endl;
	cout << "length: " << r3->getLength() << endl;
	cout << "width: " << r3->getWidth() << endl;
	cout << "x: " << r3->getX() << endl;
	cout << "y: " << r3->getY() << endl;
	r3->setLength(10);
	r3->setWidth(5);
	r3->setX(5);
	r3->setY(10);
	r3->moveRectangle(-10, -20);
	cout << "\nAfter Setters " << endl;
	cout << "length: " << r3->getLength() << endl;
	cout << "width: " << r3->getWidth() << endl;
	cout << "x: " << r3->getX() << endl;
	cout << "y: " << r3->getY() << endl;
	double p3 = r3->calculatePerimeter();
	cout << "perimeter: " << p3 << endl;
	double a3 = r3->calculateArea();
	cout << "area: " << a3 << endl;

	
  return 0;
}