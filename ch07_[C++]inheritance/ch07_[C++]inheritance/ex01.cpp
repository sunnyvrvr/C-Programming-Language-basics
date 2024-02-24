#include <iostream>
using namespace std;

class Animal {
public:
	void Breathe() {
		cout << "���� ����." << endl;
	}
	int age;
};

class Dog : public Animal {
public:
	void Walk() {
		cout << "�ȴ´�." << endl;
	}
};

class Sparrow : public Animal {
public:
	void Fly() {
		cout << "����." << endl;
	}
};

int main() {
	Dog d;
	d.age = 7;
	d.Breathe();
	d.Walk();
	cout << d.age << endl;

	Sparrow s;
	s.age = 2;
	s.Breathe();
	s.Fly();
	cout << s.age << endl;
}

