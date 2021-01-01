// This program declares the Square class and uses member functions to find
// the perimeter and area of the square

// Maazin Ahmed Lab 13.1 Exercsie 1 & 2

#include <iostream>

using namespace std;

class Square
{
private:
    float side;
public:
    void setSide(float);
    float findArea();
    float findPerimeter();

    Square() {side = 1;}
    Square (float s) {side = s;}
    ~Square() {;}
};

int main()

{

	Square box;	// box is defined as an object of the Square class

	float size;	// size contains the length of a side of the square

	Square box1(9);


cout << "Please enter the length of the side of the square" << endl;
cin >> size;

	box.setSide(size);

    cout << "The area is: " << box.findArea() << endl;

    cout << "The perimeter is: "  << box.findPerimeter() << endl;

    cout << "The area of Box1 is: " << box1.findArea() << endl;

    cout << "The perimeter of Box1 is: " << box1.findPerimeter() << endl;

	return 0;

}

// _______________________________________________________

//

// Implementation section	Member function implementation



//**************************************************

//  setSide

//

//  task:	 This procedure takes the length of a side and

//	         places it in the appropriate member data

//  data in: length of a side

//***************************************************

void Square::setSide(float length)

{
	side = length;
}

//**************************************************

//	findArea

//

//  task:	       This finds the area of a square

//  data in:       none (uses value of data member side)

//  data returned: area of square

//***************************************************

float Square::findArea()

{
	return side * side;
}

//**************************************************

//	findPerimeter

//

//  task:	       This finds the perimeter of a square

//  data in:       none (uses value of data member side)

//  data returned: perimeter of square

//***************************************************

float Square::findPerimeter()

{
	return 4 * side;
}
