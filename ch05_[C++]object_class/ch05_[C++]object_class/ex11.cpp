#include <iostream>
using namespace std;

class Myclass {
public:
	void PrintThis() {
		cout << "���� �ּҴ� " << this << endl;
	}
};

int main() {
	Myclass a, b;
	cout << "��ü a�� �ּҴ� " << &a << endl;
	a.PrintThis();
	cout << "��ü b�� �ּҴ� " << &b << endl;
	b.PrintThis();
}