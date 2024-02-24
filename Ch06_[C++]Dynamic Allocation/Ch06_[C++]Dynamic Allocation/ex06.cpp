#include <iostream>
//#include <string.h>
#include <cstring>
using namespace std;

//복사 생성자 String클래스 만들기 연습 - 두들교재 p360

class String {
public:
	String() {
		strData = NULL;
		len = 0;
	}
	String(const char* str) {
		len = strlen(str);
		strData = new char[len + 1];
		strcpy(strData, str);
	}
	~String() {
		if (strData) {
			delete[] strData;
		}
	}
	const char* GetStrData() const {
		if (strData) return strData;
		return " ";
	}
	int GetLen() const {
		return len;
	}
private:
	char* strData;
	int len;
};

int main() {
	String s1;
	String s2("Hello");
	cout << s1.GetLen() << endl;
	cout << s1.GetStrData() << endl;
	cout << s2.GetLen() << endl;
	cout << s2.GetStrData() << endl;
};