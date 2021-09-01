class Rectangle
{
	private: // encapsulated
		double length, width, x, y; // attributes
	public:
		// Constructors
		Rectangle();
		Rectangle(double length, double width);
		Rectangle(double length, double width, double x, double y);
		// Destructors
		~Rectangle();
		
		
		// accesor methods AKA getters
		double getLength();
		double getWidth();
		double getX();
		double getY();
		
		// mutator methods AKA setters
		void setLength(double length);
		void setWidth(double width);
		void setX(double x);
		void setY(double y);
		void moveRectangle(double x, double y);
		
		// methods
		double calculatePerimeter();
		double calculateArea();
};

// Overloading

Rectangle::Rectangle() // implicit parameters modifying something without info
{
	this->length = 0;
	this->width = 0;
	this->x = 0;
	this->y = 0;
}

Rectangle::Rectangle(double length, double width)
{
	this->length = length;
	this->width = width;
}

Rectangle::Rectangle(double length, double width, double x, double y)
{
	this->length = length;
	this->width = width;
	this->x = x;
	this->y = y;
}

Rectangle::~Rectangle()
{
	
}

double Rectangle::getLength()
{
	return this->length;
}

double Rectangle::getWidth()
{
	return this->width;
}

double Rectangle::getX()
{
	return this->x;
}

double Rectangle::getY()
{
	return this->y;
}

void Rectangle::setLength(double length)
{
	this->length = length; // "this" refers to object attribute, double lenght for local var, Rectangle is global var
}

void Rectangle::setWidth(double width)
{
	this->width = width;
}

void Rectangle::setX(double x)
{
	this->x = x;
}

void Rectangle::setY(double y)
{
	this->y = y;
}

double Rectangle::calculatePerimeter()
{
	return 2 * (this->length + this->width);
}

double Rectangle::calculateArea()
{
	return this->length * this->width;
}

void Rectangle::moveRectangle(double x,double y)
{
	this->x += x;
	this->y += y;
}