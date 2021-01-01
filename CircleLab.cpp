#include <iostream>

using namespace std;

// class declaration section	(header file)

// Maazin Ahmed Lab 13.2 Exercise 1

class Circles

{

public:

	void setCenter(int x, int y);

	double findArea();

	double findCircumference();

	void printCircleStats();	// This outputs the radius and center of the circle.

	Circles(float r);			// Constructor

	Circles();					// Default constructor

private:

	float radius;

	int	center_x;

	int	center_y;

};

const double PI = 3.14;

// Client section

int main()

{

	Circles sphere(8);

	sphere.setCenter(9, 10);

	sphere.printCircleStats();



	cout << "The area of the circle is " << sphere.findArea() << endl;

	cout << "The circumference of the circle is " << sphere.findCircumference() << endl;

	return 0;

}

// __________________________________________________________________

//

// Implementation section	Member function implementation
Circles::Circles()
{
    radius = 1;
    setCenter(0, 0);
}

Circles::Circles(float r)
{
    radius = r;
    setCenter(0, 0);
}

double Circles::findArea()
{
    return PI * (radius * radius);
}

double Circles::findCircumference()
{
    return PI * (2 * radius);
}

void Circles::printCircleStats()
{

	cout << "The radius of the circle is " << radius << endl;

	cout << "The center of the circle is (" << center_x

		 << "'" << center_y << ")" << endl;
}

void Circles::setCenter(int x, int y)
{
	center_x = x;
	center_y = y;
}

