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
	String(const String& rhs) { //String lhs = rhs; ���� ���縦 �����ϴ� ���� ������
		len = rhs.len;
		strData = new char[len + 1];
		strcpy(strData, rhs.strData);
	}
	String& operator=(const String& rhs) { // lhs = rhs; -> lhs.operator=(rhs) �� ��ȯ�ؼ� ó��. ���� ���縦 �����ϵ��� ���Կ����ڸ� �����ε�(������)��
		if (this != &rhs) { //  a = a �� ���� ���� �ƴ� ���
			len = rhs.len;
			delete[] strData;
			strData = new char[len + 1];
			strcpy(strData, rhs.strData);
		}
		return *this;//*this �� �ᱹ lhs�� �ǹ�
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
	String s2 = s1; // ���� ���簡 �̷�������� ��������ڸ� �������� ������ �Լ� ����� s1, s2 �Ҹ�� �ߺ� ������ ������
	cout << s1.GetStrData() << endl;
	cout << s2.GetStrData() << endl;

	String s3("World");
	String s4;
	s4 = s3; // ���� ���簡 �̷�������� ���� �����ڸ� �����ε����� ������ �Լ� ����� s3, s4 �Ҹ�� �ߺ� ������ ������
	cout << s3.GetStrData() << endl;
	cout << s4.GetStrData() << endl;
}