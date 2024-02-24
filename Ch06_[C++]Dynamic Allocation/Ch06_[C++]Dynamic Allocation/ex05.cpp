#include <iostream>
using namespace std;
//클래스 소멸자 stack영역 소멸- 두들교재 p351

class Vector2 { //2차원 벡터
	float x, y;
public:
	Vector2() : x(0), y(0) {
		cout << this << " : Vector2()" << endl;
	}
	Vector2(float x, float y) : x(x), y(y) {
		cout << this << " : Vector2(float, float)" << endl;
	}
	~Vector2() {
		cout << this << " :~Vector2()" << endl;
	}
	
	float GetX() const {	return x;	}
	float GetY() const {	return y;	}
};

int main() {
	cout << "main 시작" << endl;
	Vector2 s1;
	Vector2 s2(2, 3);

	cout << "(" << s1.GetX() << "," << s1.GetY() << ")" << endl;
	cout << "(" << s2.GetX() << "," << s2.GetY() << ")" << endl;

	Vector2* d1 = new Vector2;
	Vector2* d2 = new Vector2(4,5);

	cout << "(" << d1->GetX() << "," << d1->GetY() << ")" << endl;
	cout << "(" << d2->GetX() << "," << d2->GetY() << ")" << endl;

	delete d1;
	delete d2;

	cout << "main 끝" << endl;
}