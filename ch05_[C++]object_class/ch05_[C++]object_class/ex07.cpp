#include <iostream>
#include <string>
using namespace std;
//------ c++ string Ŭ���� 
int main() {
	string name;
	string greeting;

	cout << "�� �Է�: ";
	cin >> name;

	greeting = "�ȳ��ϼ���, " + name + " ��!";
	cout << greeting << endl;
	cout << name << "Sunjin " << name.length() << "�����Դϴ�." << endl;
	cout << name << "�� ù���ڴ� " << name[0] << "�����Դϴ�." << endl;

	//------ r value
	int a = 10;
	//	int a(10);
	int& b = a;
	//	b = 15;
	cout << a << endl;
	cout << b << endl;
	//int&& b = a + 1;
	//	int&& c = b + 1;
}