#include <iostream>
using namespace std;

class Myclass {
public:
	void PrintThis() {
		cout << "나의 주소는 " << this << endl;
	}
};

int main() {
	Myclass a, b;
	cout << "객체 a의 주소는 " << &a << endl;
	a.PrintThis();
	cout << "객체 b의 주소는 " << &b << endl;
	b.PrintThis();
}