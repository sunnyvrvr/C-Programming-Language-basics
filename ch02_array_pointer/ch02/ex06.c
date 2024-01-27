#include <stdio.h>
//======= 재귀함수 ======
void rec(int n) {
	if (n > 5) {
		return;
	}
	printf("n = %d\n", n);
	rec(n + 1);
}

//int main() {
//	rec(1);
//}

//int fact(int);
//
//int main() {
//	int n;
//	printf("정수 입력: ");
//	scanf("%d", &n);
//	printf("%d! = %d\n", n, fact(n));
//}
//
//int fact(int n) {
//	if (n == 0) return 1;
//	return n * fact(n - 1);
//}

//===== static 변수 
void SimpleFunc(void)
{
	static int num1 = 0;
	int num2 = 0;
	num1++, num2++;
	printf("static: %d, local: %d \n", num1, num2);
}

int main(void) 
{
	int i;
	for (i = 0; i < 3; i++)
		SimpleFunc();
	return;
}
