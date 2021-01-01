#include <iostream>
using namespace std;

// class declaration section	(header file)

// Maazin Ahmed Lab 13.2 Exercise 2

class Circles

{

public:

	double findArea();
	double findCircumference();
	void printCircleStats();	// This outputs the radius and center of the circle.
	Circles();
	Circles(float r);
    Circles(float r, int x, int y);

private:

	float radius;
	int	center_x;
	int	center_y;

};

const double PI = 3.14;

// Client section

int main()

{

	Circles sphere(8, 9, 10);

	sphere.printCircleStats();



	cout << "The area of the circle is " << sphere.findArea() << endl;

	cout << "The circumference of the circle is " << sphere.findCircumference() << endl;

	Circles sphere1 = Circles(2);
	Circles sphere2;

	sphere1.printCircleStats();
	cout << "The area of the circle is " << sphere1.findArea() << endl;
	cout << "The circumference of the circle is " << sphere1.findCircumference() << endl;

	sphere2.printCircleStats();
	cout << "The area of the circle is " << sphere2.findArea() << endl;
	cout << "The circumference of the circle is " << sphere2.findCircumference() << endl;

	return 0;
}

// __________________________________________________________________

//

// Implementation section	Member function implementation

Circles::Circles()
{
    radius = 1;
    center_x = 0;
    center_y = 0;
}

Circles::Circles(float r )
{
    radius = r;
    center_x = 0;
    center_y = 0;
}

Circles::Circles(float r, int x, int y)
{
    radius = 4;
    center_x = x;
    center_y = y;
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

