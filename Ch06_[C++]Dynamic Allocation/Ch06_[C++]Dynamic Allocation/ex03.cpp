#include <iostream>
using namespace std;

int main() {

	int* a = new int[5]{ 1,2,3,4,5 };

	cout << a << endl;
	for (int i = 0; i < 5; i++) {
		cout << a[i] << ' '; //cout << *(a+1) << ' ';와 동일
	}
	cout << endl;

	a[0] = 10;
	a[1] = 10;
	a[2] = 10;
	cout << a << endl;
	for (int i = 0; i < 5; i++) {
		cout << a[i] << endl; //cout << *(a+i) << ' ';와 동일
	}
	cout << endl;

	delete[] a;
}
