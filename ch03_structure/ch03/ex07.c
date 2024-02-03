//--------매크로함수--------
#include <stdio.h>
//#define SQUARE(X) X * X
#define SQUARE(X) ((X) * (X)) //1 매크로함수의 모든 변수에 괄호를 붙인다 2 전체 식에 괄호친다
int main() {
	int a = 5;
	printf("%d\n", SQUARE(a)); //printf("%d", a * a);로 치환
	printf("%d\n", SQUARE(a + 1));//printf("%d", a + 1 * a + 1));
	printf("%d\n", SQUARE((a + 1)));//printf("%d", (a + 1) * (a + 1));
	printf("%d\n", SQUARE(100 / SQUARE(a)));//printf("%d", 100/((a) * (a)));
}