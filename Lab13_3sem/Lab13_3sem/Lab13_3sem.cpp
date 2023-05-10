#include <string>
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	string inputS, outputS, s = "please change me";
	cout << s << endl;

	cout << "Введите подстроку которую нужно заменить -- "; cin >> inputS;

	int index = s.find(inputS);
	if (index == -1) { cout << "нет такой подстроки"; return 0; }

	cout << "Введите подстроку на которую нужно заменить -- "; cin >> outputS;

	s.replace(index, size(inputS), outputS);

	cout << s;
}