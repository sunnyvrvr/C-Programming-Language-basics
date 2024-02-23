#include <iostream>
using namespace std;

int main(void)
{
	// ------- 참조자
	// 참조자는 기존에 선언된 변수에 붙이는 '별칭', 변수의 이름 
	//int num1 = 1020;
	//int& num2 = num1;
	//cout << num1 << endl;
	//cout << num2 << endl;
	//num2 = 3047;
	//cout << num1 << endl;
	//cout << num2 << endl;
	//cout << &num1 << endl;
	//cout << &num2 << endl;

	int arr[3] = { 1,3,5 };
	int& ref1 = arr[0];
	int& ref2 = arr[1];
	int& ref3 = arr[2];
	cout << ref1 << endl;
	cout << ref2 << endl;
	cout << ref3 << endl;
}
