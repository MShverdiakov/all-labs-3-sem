#include <iostream>
#include <fstream>

using namespace std;

struct Student {
	string group, name, sec_name, surname;
	struct {
		int day, month, year;
	} date_of_birth;
	char gender;
	double physics_grade, math_grade, inf_grade, scholarship;
};

Student* loadData(int &num) {
	ifstream fin("input.txt");
	int &n = num;  fin >> n;
	Student* students = new Student[n];
	int i = 0;
	while (i < n) {
		fin >> students[i].group >> students[i].surname >> students[i].name >> students[i].sec_name
			>> students[i].date_of_birth.day >> students[i].date_of_birth.month >> students[i].date_of_birth.year
			>> students[i].gender >> students[i].physics_grade >> students[i].math_grade >> students[i].inf_grade
			>> students[i].scholarship;
		++i;
	}
	fin.close();
	return students;
}

double studentAverageGrade(Student s) {
	return (s.physics_grade + s.math_grade + s.inf_grade) / 3;
}