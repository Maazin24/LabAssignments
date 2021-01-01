#include <iostream>

#include <fstream>

using namespace std;



// This program declares a class called Inventory that has itemnNumber (which

// contains the id number of a product) and numOfItem (which contains the

// quantity on hand of the corresponding product) as private data members.

// The program will read these values from a file and store them in an

// array of objects (of type Inventory). It will then print these values

// to the screen.



// Maazin Ahmed Lab 13.4 Exercise 1



// Example: Given the following data file:

//		986 8

//		432 24

//

// This program reads these values into an array of objects and prints the

// following:

//		Item number 986 has 8 items in stock

//		Item number 432 has 24 items in stock



const int NUMOFPROD = 10;		// This holds the number of products a store sells

class Inventory

{

public:

	void getId(int item);		// This puts item in the private data member

								// itemNumber of the object that calls it.
	void getAmount(int num);	// This puts num in the private data member

								// numOfItem of the object that calls it.

	void display();				// This prints to the screen

								// the value of itemNumber and numOfItem of the

								// object that calls it.
private:

	int	itemNumber;				// This is an id number of the product

	int	numOfItem;				// This is the number of items in stock
};

int main()

{

	ifstream infile;	// Input file to read values into array

	infile.open("Inventory.dat");

    Inventory products[NUMOFPROD];

	int pos;	// loop counter

	int id;		// variable holding the id number

	int total;	// variable holding the total for each id number


    pos = 0;

    while (infile.good() && pos < NUMOFPROD)
    {
        infile >> id >> total;
        products[pos].getId(id);
        products[pos++].getAmount(total);
    }

    for (int n = 0; n < pos; n++)
    {
        cout << endl;
    }
	// Fill in the code to print out the values (itemNumber and numOfItem) for

	// each object in the array products.

	// This should be done by calling the member function display within a loop



	return 0;

}

void Inventory::getId(int item)
{
    itemNumber = item;
}

void Inventory::getAmount(int num)
{
    numOfItem = num;
}

void Inventory::display()
{
    cout << "Item number " << itemNumber << " has " << numOfItem << " items in stock" << endl;
}
