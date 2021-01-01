// This program reads in from the keyboard a record of financial information
// consisting of a person’s name, income, rent, food costs, utilities and
// miscellaneous expenses. It then determines the net money
// (income minus all expenses)and places that information in a record
// which is then written to an output file.

// Maazin Ahmed Lab 12.3 Exericse 1

#include <fstream>
#include <iostream>
#include <iomanip>
using namespace std;

const int NAMESIZE = 15;

struct	budget	// declare a structure to hold name and financial information

{
	char name[NAMESIZE + 1];

	float income;		// person's monthly income

	float rent;			// person's monthly rent

	float food;			// person's monthly food bill

	float utilities;	// person's monthly utility bill

	float miscell;		// person's other bills

	float net;			// person's net money after bills are paid
};
int main()
{
	fstream indata;

	ofstream outdata;	// output file of
						// student.
	indata.open("income.dat.txt", ios::out | ios::binary);	// open file as binary
														// output.
	outdata.open("student.out");	// output file that we
									// will write student
									// information to.

	outdata << left << fixed << setprecision(2);	// left indicates left
													// justified for fields
	budget person;	// defines person to be a record

	cout << "Enter the following information" << endl;

	cout << "Person's name: ";

	cin.getline(person.name, NAMESIZE);

	cout << "Income :";

	cin >> person.income;

    cout << "Rent: ";

    cin >> person.rent;

    cout << "Food: ";

    cin >> person.food;

    cout << "Utilities: ";

    cin >> person.utilities;

    cout << "Miscell: ";

    cin >> person.miscell;

	person.net = person.income - (person.rent + person.food + person.utilities + person.miscell);

	indata.write((char*)&person, sizeof(person));

	indata.close();

	indata.open("income.dat.txrt", ios::in | ios::binary);

    indata.read((char*)&person, sizeof(person));

	outdata << setw(20) << "Name" << setw(10) << "Income" << setw(10) << "Rent"

		    << setw(10) << "Food" << setw(15) << "Utilities" << setw(15)

		    << "Miscellaneous" << setw(10) << "Net Money" << endl << endl;

	return 0;
}
