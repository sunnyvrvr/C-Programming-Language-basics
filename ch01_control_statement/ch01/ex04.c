#include<stdio.h>

int main()
{
	//int a = 5;
	//printf("a는 원래 %d였다!\n", a);
	//++a;
	//printf("1 증가해서 %d이 됐다!!\n", a);
	//--a;
	//printf("1 감소해서 %d이 됐다!!\n", a);

	//int a = 5;
	//int b;
	//b = ++a;
	//printf("a=%d\n", a);
	//printf("b=%d\n", b);
	//b = a++;
	//printf("a=%d\n", a);
	//printf("b=%d\n", b);

	//int a = 30, b = 50;
	//int p = a > b;
	//int q = a < b;
	//int r = a == b;
	//printf("%d는 %d보다 크다:%d\n", a, b, p);
	//printf("%d는 %d보다 작다:%d\n", a, b, q);
	//printf("%d는 %d와 같다:%d\n", a, b, r);

	int a = 3, b =4, c=5, d=6;
	int p = a >= 1 && a <= 10;
	int q = a == 3 || a == 7;
	int r = !q;

	printf("%d\n", p);
	printf("%d\n", q);
	printf("%d\n", r);

	a = b = c = d;
	printf("%d %d %d %d\n\n\n", a, b, c, d);

	a = 1 + 5 == 2 * 3 && 2 < 5;
	printf("%d\n", a);
}
