#include <iostream>
using namespace std;

//깊은 복사를 통한 해결
class A {
public:
	A(int x, int* y) :x(x), y(y) {}
	A(const A& a) : x(a.x), y(new int(*a.y)) {}
	//명시적으로 복사 생성자에 깊은 복사로 처리되도록 코드를 작성
	~A() {
		delete y;
	}
	int x;
	int* y;
};

int main() {
	A a(1, new int(2));
	A b = a;

	a.x = 3;
	*a.y = 4;
	cout << b.x << endl;
	cout << *b.y << endl;
	//b 소멸 후 a 소멸 시 깊은 복사에 의해 참조하는 공간이 다르므로 소멸자 수행에 문제가 생기지 않는다
}




