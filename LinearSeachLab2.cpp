// This program performs a linear search on a character array // Lab 8.1 Exercise 2

// Maazin Ahmed

#include <iostream>

using namespace std;

int searchList(int[], int, int); // function prototype

const int SIZE = 8;

int main()

{

	int num[SIZE] = {3, 6, -19, 5, 5, 0, -2, 99};

	int found;

	int number;

	cout << "Enter a number to search for (-99 will end input)" << endl;

	while (number != -99)
    {

        cin >> number;

	found = searchList(num, SIZE, number);

	if (found == -1)

		cout << "The number " << number

		     << " was not found in the list" << endl;

	else

		cout << "The number " << number << " is in the " << found + 1

		     << " position of the list" << endl;
    }

	return 0;

}
//*******************************************************************

//	searchList

//

//  task:	       This searches an array for a particular value

//  data in:	   List of values in an array, the number of

//	               elements in the array, and the value searched for

//	               in the array

//  data returned: Position in the array of the value or -1 if value

//	               not found

//

//*******************************************************************
int searchList(int List[], int numElems, int value)

{

	for (int count = 0; count <= numElems; count++)

	{

		if (List[count] == value)

			// each array entry is checked to see if it contains

			// the desired value.

			return count;

			// if the desired value is found, the array subscript

			// count is returned to indicate the location in the array
	}

	return -1;	// if the value is not found, -1 is returned
}

