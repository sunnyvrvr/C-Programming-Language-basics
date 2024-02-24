#include <iostream>
using namespace std;

int main() {		
	// int a = 5; int a(5); int a = int(5); 이 셋은 동일한 표현
	// 정수 1개 동적할당
	int* a = new int(5);

	cout << a << endl;
	cout << *a << endl;
	*a = 10;
	cout << a << endl;
	cout << *a << endl;

	delete a;

}




