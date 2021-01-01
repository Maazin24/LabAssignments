// Maazin Ahmed

#include <iostream>

using namespace std;

typedef int GradeType[100];		// declares a new data type:

float findAverage(const GradeType, int);	// finds average of all grades

int  findHighest(const GradeType, int);		// finds highest of all grades

int  findLowest(const GradeType, int);		// finds lowest of all grades


int main()

{

	GradeType grades;	// the array holding the grades.

	int numberOfGrades;	// the number of grades read.

	int pos;			// index to the array.

	float avgOfGrades;	// contains the average of the grades.

	int highestGrade = 0;	// contains the highest grade.

	int lowestGrade = 0;	// contains the lowest grade.


    cout << "Please enter the amount of grades for the student" << endl;

    cin >> pos;

    cout << "Now please enter the grades that the student recieved" << endl;

    for (int i = 0; i < pos; i++)
    {
        cin >> grades[i];
    }


	numberOfGrades = pos;

	avgOfGrades = findAverage(grades, numberOfGrades);

	cout << endl << "The average of all the grades is " << avgOfGrades << endl;

	highestGrade = findHighest(grades, numberOfGrades);

	cout << endl << "The highest grade is " << highestGrade << endl;

	lowestGrade = findLowest(grades, numberOfGrades);

	cout << endl << "The lowest grade is " << lowestGrade << endl;

	return 0;
}

float findAverage(const GradeType	array, int size)

{

	float sum = 0;			// holds the sum of all the numbers



	for (int pos = 0; pos < size; pos++)

		sum = sum + array[pos];



	return (sum / size);	// returns the average

}

int	findHighest(const GradeType array, int size)

{
        int MAX = 0;
    for (int i = 0; i < size; i++)
    {
            if (array[i] > MAX)
            MAX = array[i];
    }
    return MAX;
}

int	findLowest(const GradeType array, int size)

{
        int MIN = 100;
    for (int i = 0; i < size; i++)
    {
        if (array[i] < MIN)
            MIN = array[i];
    }
    return MIN;
}
