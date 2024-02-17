#include <iostream>
using namespace std;

int main(void)
{
	// ------- ÂüÁ¶ÀÚ
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
