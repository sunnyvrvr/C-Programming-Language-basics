#include <iostream>
using namespace std;

int main() {
	int* a = new int(3);
	int* b = a;
	cout << *a << ' ' << *b << endl;
	*a = 5;
	cout << *a << ' ' << *b << endl;
	*b = 10;
	cout << *a << ' ' << *b << endl;
	delete a;
	delete b; //동일한 공간을 두 번째 삭제하려고 하니 에러

	int* a = new int(3);
	int* a = new int(3);
	cout << *a << ' ' << *b << endl;//3 3 출력
	*a = 5;
	cout << *a << ' ' << *b << endl;//5 3 출력
	*b = 10;
	cout << *a << ' ' << *b << endl;//5 10 출력
	delete a;
	delete b;//서로 다른 공간이므로 삭제시 에러 안남.
}