#include <iostream>
//반환형 참조형, 반환도 참조
using namespace std;

int& RefRetFuncOne(int& ref) {
	ref++;
	return ref;
}

int main(void) {
	int num1 = 1;
	//	int num2 = RefRetFuncOne(num1);
	int& num2 = RefRetFuncOne(num1);
	num1++;
	num2 += 100;
	cout << num1 << endl;
	cout << num2 << endl;
}