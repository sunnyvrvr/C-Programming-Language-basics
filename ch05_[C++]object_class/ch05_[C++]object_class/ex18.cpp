#include <iostream>
using namespace std;

class Vector2 {
public:
    Vector2();
    Vector2(float x, float y);
    float GetX() const;
    float GetY() const;
    Vector2 operator+(const Vector2 other) const;
    Vector2 operator-(const Vector2 other) const;

private:
    float x, y;
};


// 사칙연산자 오버로딩: operator+, operator-로 이름을 지어야 한다
// const 함수 - a라는 객체의 값은 건드리지 않겠다
Vector2 Vector2::operator+(const Vector2 other) const {
    return Vector2(x + other.x, y + other.y);
}
Vector2 Vector2::operator-(const Vector2 other) const {
    return Vector2(x - other.x, y - other.y);
}

int main() {
    Vector2 a(2, 3), b(5, 6);
    Vector2 c1 = a + b;
    Vector2 c2 = a - b;

    cout << "c1 = (" << c1.GetX() << ", " << c1.GetY() << ")" << endl;
    cout << "c2 = (" << c2.GetX() << ", " << c2.GetY() << ")" << endl;
}

Vector2::Vector2() : x(0), y(0) {}
Vector2::Vector2(float x, float y) : x(x), y(y) {}
float Vector2::GetX() const { return x; }
float Vector2::GetY() const { return y; }