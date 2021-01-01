// This program reads floating point data from a data file and places those

// values into the private data member called values (a floating point array)

// of the FloatList class. Those values are then printed to the screen.

// The input is done by a member function called GetList. The output

// is done by a member function called PrintList. The amount of data read in

// is stored in the private data member called length. The member function

// GetList is called first so that length can be initialized to zero.


// Maazin Ahmed Lab 13.3 Exercise 2 & 3

#include <iostream>

#include <fstream>

#include <iomanip>

using namespace std;



const int MAX_LENGTH = 50;		// MAX_LENGTH contains the maximum length of our list

class FloatList					// Declares a class that contains an array of

								// floating point numbers

{

public:

	void getList(ifstream&);	// Member function that gets data from a file

	void printList() const;		// Member function that prints data from that

								// file to the screen.

	FloatList();				// constructor that sets length to 0.

	~FloatList();				// destructor
private:

	int length;         //	Holds the number of elements in the array

	float values[MAX_LENGTH];	//	The array of values
};

int main()

{

	ifstream tempData;	// Defines a data file

	FloatList list;

	cout << fixed << showpoint;
	cout << setprecision(2);

	tempData.open("temperatures.txt");

	list.getList(tempData);

	list.printList();

	return 0;

}



FloatList::FloatList()

{
    length = 0;
}



void FloatList::getList(ifstream &ifs)
{
    float val;
    while (ifs.good())
    {
        ifs >> val;
        values[length++] = val;
    }
}

void FloatList::printList() const
{
    for (int i =0; i < length; ++i)
    {
        cout << values[i] << endl;
    }
}

FloatList:: ~FloatList()
{
    float sum = 0;
    for (int i = 0; i < length; ++i)
    {
        sum+= values[i];
        cout << "The average temperature is: " << sum/length << endl;
    }
}
