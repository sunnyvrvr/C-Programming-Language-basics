#include <iostream>
using namespace std;
//------ ������ �����ε�
/****************** Ŭ���� ���� ******************/

class Vector2 {
public:
    Vector2();
    Vector2(float x, float y);
    float GetX() const;
    float GetY() const;
    static Vector2 Sum(Vector2 a, Vector2 b);  // ���� �޼��� ����
    Vector2 Add(Vector2 other);                // �Ϲ� �޼��� ����

private:
    float x, y;
};
Vector2 Sum(Vector2 a, Vector2 b);             // ���� �Լ� ����

/****************** main �Լ� ******************/

int main() {
    Vector2 a(2, 3), b(5, 6);
    Vector2 c1 = Sum(a, b);           // ���� �Լ� ȣ��
    Vector2 c2 = Vector2::Sum(a, b);  // ���� �޼��� ȣ��
    Vector2 c3 = a.Add(b);            // �Ϲ� �޼��� ȣ��

    cout << "c1 = (" << c1.GetX() << ", " << c1.GetY() << ")" << endl;
    cout << "c2 = (" << c2.GetX() << ", " << c2.GetY() << ")" << endl;
    cout << "c3 = (" << c3.GetX() << ", " << c3.GetY() << ")" << endl;
}

/****************** �Լ� ���� ******************/

Vector2::Vector2() : x(0), y(0) {}
Vector2::Vector2(float x, float y) : x(x), y(y) {}
float Vector2::GetX() const { return x; }
float Vector2::GetY() const { return y; }
// ���� �޼��� ����
// Tip: ���� �޼����� ���ǿ����� static Ű���带 ���� �ʿ䰡 ����.
Vector2 Vector2::Sum(Vector2 a, Vector2 b) {
    return Vector2(a.x + b.x, a.y + b.y);
}
// �Ϲ� �޼��� ����
Vector2 Vector2::Add(Vector2 other) {
    return Vector2(x + other.x, y + other.y);
}
// ���� �Լ� ����
Vector2 Sum(Vector2 a, Vector2 b) {
    return Vector2(a.GetX() + b.GetX(), a.GetY() + b.GetY());
}
