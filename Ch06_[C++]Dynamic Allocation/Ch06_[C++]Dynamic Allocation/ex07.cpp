#include <iostream>
//#include <string.h>
#include <cstring>
using namespace std;

//String클래스 복사 생성자 - 두들교재 p364

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
	String s1("Hello"); 
	String s2 = s1;
	cout << s1.GetStrData() << endl;
	cout << s2.GetStrData() << endl;
};