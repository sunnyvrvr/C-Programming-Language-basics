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

	printf("%d + %d = %d\n", 010, 011, 010 + 011);  // 010 ��� �տ� 0�� ���̸� 8������ �ν��ϰ� ����
	printf("%d + %d = %d\n", 0x10, 0x11, 0x10 + 0x11); // 0x10 ��� �տ� 0x�� ���̸� 16������ �ν��ϰ� ����
	int a, b;
	scanf("%o %o", &a, &b); // scanf(%o%o) �Էµ� ���� 8������ �ؼ�
	printf("%d + %d = %d\n", a, b, a + b);
	printf("%#o + %#o = %#o\n", a, b, a + b); // printf(%#o) 8������ ���
	scanf("%x %x", &a, &b);
	printf("%d + %d = %d\n", a, b, a + b);
	printf("%#x + %#x = %#x\n", a, b, a + b); // printf(%#x) 16������ ���

	printf("%15.3f\n", 31.4);
	printf("%15.3e\n", 31.4);
	printf("%g\n", 0.000314);
	printf("%g\n", 0.0000314);
}