#include <iostream>
using namespace std;

//동일한 공간을 두 번째 삭제하려고 하니 에러
class A {
public:
	A(int x, int* y) :x(x), y(y) {} //a타입을 받는 생성자는 없다 - a타입을 받는 생성자 : 복사생성자
	~A() {
		delete y;
	}
	//복사생성자를 만들지 않으면 기본 복사생성자
	int x;
	int* y;
};

int main() {
	A a(1, new int(2));
	//A b = a; //문제가 발생한 부분
	A b(a);
	a.x = 3;
	*a.y = 4;
	cout << b.x << endl;
	cout << *b.y << endl;
	delete a.y;
	delete b.y; // 에러: a.y와 b.y는 위 1번 코드에 따라 기본 복사 생성자에 의해 얕은 복사가 되어
			// 원인: 참조하는 공간이 같기에 두번 삭제를 시도하는 코드
}




