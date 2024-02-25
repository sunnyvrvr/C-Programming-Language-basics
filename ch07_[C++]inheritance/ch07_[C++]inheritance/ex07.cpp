#include <iostream>
using namespace std;
// 오버라이딩
class Base {
public:
	int a = 10;
};

class Derived : public Base {
public:
	int a = 10;
};

int main() {
	Base b;
	Derived d;
	cout << b.a << endl;
	cout << b.a << endl;
}