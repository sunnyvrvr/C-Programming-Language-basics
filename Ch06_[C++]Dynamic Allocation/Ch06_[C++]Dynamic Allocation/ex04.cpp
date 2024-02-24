#include <iostream>
using namespace std;

int main() {

	//int size;
	//cout << "입력할 정수 개수를 알려주세요: ";
	//cin >> size;

	const int size = 5; // 배열의 크기 - 컴파일되는 시점에서 결정되어 있음

	//int array[size]; //동적 할당이 아닌 배열은 길이 선언에 상수만 가능. 
	//const int size = 5; 처럼 실질적으로 상수인 변수를 쓰는 것은 가능 
	int* a = new int[size];

	cout << a << endl;
	for (int i = 0; i < size; i++) {
		cout << i + 1 << "번째 정수 입력:";
		cin >> a[i];
	}
	cout << endl;

	for (int i = 0; i < size; i++) {
		cout << i + 1 << "번째 정수 입력:";
		cin >> a[i];
	}
	cout << endl;

	for (int i = 0; i < size; i++) {
		cout << i + 1 << "번째 정수 입력:";
		cin >> a[i];
	}
	cout << endl;

	delete[] a;
}
