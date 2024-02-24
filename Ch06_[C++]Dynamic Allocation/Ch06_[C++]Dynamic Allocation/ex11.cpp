#include <iostream>
//#include <string.h>
#include <cstring>
using namespace std;

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
	String(const String& rhs) { //String lhs = rhs; 깊은 복사를 수행하는 복사 생성자
		len = rhs.len;
		strData = new char[len + 1];
		strcpy(strData, rhs.strData);
	}
	String& operator=(const String& rhs) { // lhs = rhs; -> lhs.operator=(rhs) 로 변환해서 처리. 깊은 복사를 수행하도록 대입연산자를 오버로딩(재정의)함
		if (this != &rhs) { //  a = a 와 같은 꼴이 아닐 경우
			len = rhs.len;
			delete[] strData;
			strData = new char[len + 1];
			strcpy(strData, rhs.strData);
		}
		return *this;//*this 는 결국 lhs를 의미
	}
	~String() {
		if (strData) {
			delete[] strData;
		}
	}
	const char* GetStrData() const {
		if (strData) return strData;
		return "";
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
	String s2 = s1; // 깊은 복사가 이루어지도록 복사생성자를 구현하지 않으면 함수 종료로 s1, s2 소멸시 중복 삭제로 에러남
	cout << s1.GetStrData() << endl;
	cout << s2.GetStrData() << endl;

	String s3("World");
	String s4;
	s4 = s3; // 깊은 복사가 이루어지도록 대입 연산자를 오버로드하지 않으면 함수 종료로 s3, s4 소멸시 중복 삭제로 에러남
	cout << s3.GetStrData() << endl;
	cout << s4.GetStrData() << endl;
}