#include <iostream>

#include "Header.h"

int main()
{
	setlocale(LC_ALL, "Russian");

	int n;
	Student* students = loadData(n);

	double sumOfAverage = 0;
	for (int i = 0; i < n; i++)
		sumOfAverage += studentAverageGrade(students[i]);
	double studentsAverage = sumOfAverage / n;
	
	for (int i = 0; i < n; i++)
		if (studentsAverage < studentAverageGrade(students[i]))
			cout << students[i].surname << " " << students[i].name << endl;

	delete[] students;
}
