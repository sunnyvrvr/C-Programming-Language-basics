#include <iostream>
#include <string>
using namespace std;
//------ c++ string 클래스 
int main() {
	string name;
	string greeting;

	cout << "성 입력: ";
	cin >> name;

	greeting = "안녕하세요, " + name + " 님!";
	cout << greeting << endl;
	cout << name << "Sunjin " << name.length() << "글자입니다." << endl;
	cout << name << "의 첫글자는 " << name[0] << "글자입니다." << endl;

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