//--------��ũ���Լ�--------
#include <stdio.h>
//#define SQUARE(X) X * X
#define SQUARE(X) ((X) * (X)) //1 ��ũ���Լ��� ��� ������ ��ȣ�� ���δ� 2 ��ü �Ŀ� ��ȣģ��
int main() {
	int a = 5;
	printf("%d\n", SQUARE(a)); //printf("%d", a * a);�� ġȯ
	printf("%d\n", SQUARE(a + 1));//printf("%d", a + 1 * a + 1));
	printf("%d\n", SQUARE((a + 1)));//printf("%d", (a + 1) * (a + 1));
	printf("%d\n", SQUARE(100 / SQUARE(a)));//printf("%d", 100/((a) * (a)));
}