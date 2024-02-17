#include <iostream>

int MyFunc(int);

int MyFunc(int, int);

int Adder(int num1 = 1, int num2 = 2);

int main()
{
	//------- 함수의 오버로딩
	std::cout << MyFunc(20) << std::endl;
	std::cout << MyFunc(30, 40) << std::endl;

	//------ 함수의 디폴트값
	std::cout << Adder() << std::endl;
	std::cout << Adder(5) << std::endl;
	std::cout << Adder(3, 5) << std::endl;
}

int MyFunc(int num) {
	num++;
	return num;
}

int MyFunc(int a, int b) {
	return a + b;
}

int Adder(int num1, int num2)
{
	return num1 + num2;
}
