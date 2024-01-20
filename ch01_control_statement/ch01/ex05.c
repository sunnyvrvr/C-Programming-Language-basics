#include<stdio.h>

int main() {
	//int a, b;
	//scanf("%d %d", &a, &b);
	//printf("%d+%d=%d\n", a, b, a + b);

	//double a, b;
	//scanf("%lf%lf", &a, &b);
	//printf("%.2f+%.2f=%.2f", a, b, a + b);

	//double a, b;
	//scanf("%lf%lf", &a, &b);
	//printf("BMI=%f", a / (b*2));

	char a, b;
	scanf("%c", &a);
	b = ++a;
	printf("%c", b);

	printf("%d + %d = %d\n", 010, 011, 010 + 011);  // 010 상수 앞에 0을 붙이면 8진수로 인식하고 구동
	printf("%d + %d = %d\n", 0x10, 0x11, 0x10 + 0x11); // 0x10 사수 앞에 0x를 붙이면 16진수로 인식하고 구동
	int a, b;
	scanf("%o %o", &a, &b); // scanf(%o%o) 입력된 값을 8진수로 해석
	printf("%d + %d = %d\n", a, b, a + b);
	printf("%#o + %#o = %#o\n", a, b, a + b); // printf(%#o) 8진수로 출력
	scanf("%x %x", &a, &b);
	printf("%d + %d = %d\n", a, b, a + b);
	printf("%#x + %#x = %#x\n", a, b, a + b); // printf(%#x) 16진수로 출력

	printf("%15.3f\n", 31.4);
	printf("%15.3e\n", 31.4);
	printf("%g\n", 0.000314);
	printf("%g\n", 0.0000314);
}