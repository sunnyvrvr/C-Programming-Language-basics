#include<stdio.h>

int main() {
	//int n;
	//printf("���� �Է�: ");
	//scanf("%d", &n);

	//if (n % 2 == 0) {
	//	printf("n�� ¦���Դϴ�.\n");
	//}
	//if (n % 2 == 1) {
	//	printf("n�� Ȧ���Դϴ�.\n");
	//}
	//else
	//{
	//	printf("n�� Ȧ���Դϴ�.\n");
	//}

	//if (n > 0)
	//	printf("���");
	//else if (n == 0)
	//	printf("0�̶� ����");
	//else {
	//	printf("0���� �۴�");
	//}


	int a, b, c;

	scanf("%d%d%d", &a, &b, &c);
	if (a > b) {
		if (b > c) {
			printf("%d %d %d\n", a, b, c);
		}
		else {
			if (a > c) {
				printf("%d %d %d\n", a, c, b);
			}
			else {
				printf("%d %d %d\n", c, a, b);
			}
		}
	}
	else {
		if (a > c) {
			printf("%d %d %d\n", b,a,c);
		}
		else {
			if (b > c) {
				printf("%d %d %d\n", b, c, a);
			}
			else {
				printf("%d %d %d\n", c, b, a);
			}
		}
	}
}