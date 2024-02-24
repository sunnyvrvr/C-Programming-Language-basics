#include <iostream>
using namespace std;

//동일한 공간을 두 번째 삭제하려고 하니 에러
class A {
public:
	A(int x, int* y) :x(x), y(y) {} 
	//a타입을 받는 생성자는 없다 - a타입을 받는 생성자 : 복사생성자
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
	//main함수 종료시 객체 b를 소멸 후 a를 소멸시킬 때 호출되는 소멸자에 의해 같은 장소를 두 번 소멸시키면서 에러
}




