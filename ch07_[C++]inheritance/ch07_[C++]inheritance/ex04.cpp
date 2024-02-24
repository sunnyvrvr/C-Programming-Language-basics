#include <iostream>
using namespace std;
// 상속 클래스 처리 순서
class Ice {
public:
	Ice() { cout << "Ice()" << endl; }
	~Ice() { cout << "~Ice()" << endl; }
};

class Pat {
public:
	Pat() { cout << "Pat()" << endl; }
	~Pat() { cout << "~Pata" << endl; }
};

class Bingsoo {
public:
	Bingsoo() { cout << "Bingsoo()" << endl; }
	~Bingsoo() { cout << "~Bingsoo()" << endl; }
private:
	Ice ice;
};

class PatBingsoo : public Bingsoo {
public:
	PatBingsoo() { cout << "PatBingsoo()" << endl; }
	~PatBingsoo() { cout << "~PatBingsoo()" << endl; }
private:
	Pat pat;
};

int main() {
	cout << "===== 1 =====" << endl;
	PatBingsoo* p = new PatBingsoo;
	cout << "===== 2 =====" << endl;
	delete p;
	cout << "===== 3 =====" << endl;
}