#include <iostream>

using namespace std;

class myException {
private:
	int errorNum;
public:
	//myException(const char* msg) : exception(msg) {};
	//~myException() = default;
	string what() {
		if (errorNum == 1) { return "Ошибка: Неверный индекс"; }
		if (errorNum == 2) { return "Ошибка: попытка сложения"; }
		return "Неизвестная ошибка";
	}

	void SetErrorNum(int errorNum) { this->errorNum = errorNum; }
	int GetErrorNum() { return errorNum; }
};