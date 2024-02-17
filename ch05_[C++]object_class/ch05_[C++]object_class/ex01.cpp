#include <iostream>

int MyFunc(int);

int MyFunc(int, int);

int Adder(int num1 = 1, int num2 = 2);

int main()
{
	//int num = 20;
	//std::cout << "Hello World!" << std::endl;
	//std::cout << "Hello" << "World" << "\n";
	//std::cout << num << ' ' << 'A';
	//std::cout << ' ' << 3.14 << std::endl;
	// 
	//------- 두 개의 숫자를 입력 받아 합을 구하기
	//int val1;
	//std::cout << "첫번째 숫자 입력:";
	//std::cin >> val1;
	//int val2;
	//std::cout << "두번째 숫자 입력:";
	//std::cin >> val2;
	//std::cout << "덧셈결과:" << val1 + val2 << '\n';

	//------- 두 개의 숫자를 한꺼번에 입력 받아 합을 구하기
	//int val1, val2;
	//std::cout << "두 개의 숫자 입력:";
	//std::cin >> val1 >> val2;
	//std::cout << "덧셈결과:" << val1 + val2 << '\n';

	//------- 문자열 입력
	char name[100];
	std::cout << "이름은?";
	std::cin >> name;
	std::cout << "당신의 이름은 " << name << "입니다.\n";

}