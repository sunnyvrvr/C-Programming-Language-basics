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
	//------- �� ���� ���ڸ� �Է� �޾� ���� ���ϱ�
	//int val1;
	//std::cout << "ù��° ���� �Է�:";
	//std::cin >> val1;
	//int val2;
	//std::cout << "�ι�° ���� �Է�:";
	//std::cin >> val2;
	//std::cout << "�������:" << val1 + val2 << '\n';

	//------- �� ���� ���ڸ� �Ѳ����� �Է� �޾� ���� ���ϱ�
	//int val1, val2;
	//std::cout << "�� ���� ���� �Է�:";
	//std::cin >> val1 >> val2;
	//std::cout << "�������:" << val1 + val2 << '\n';

	//------- ���ڿ� �Է�
	char name[100];
	std::cout << "�̸���?";
	std::cin >> name;
	std::cout << "����� �̸��� " << name << "�Դϴ�.\n";

}