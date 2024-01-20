#include<stdio.h>

int main() {
	//int n;
	//printf("숫자 입력: ");
	//scanf("%d", &n);

	//if (n % 2 == 0) {
	//	printf("n은 짝수입니다.\n");
	//}
	//if (n % 2 == 1) {
	//	printf("n은 홀수입니다.\n");
	//}
	//else
	//{
	//	printf("n은 홀수입니다.\n");
	//}

	//if (n > 0)
	//	printf("양수");
	//else if (n == 0)
	//	printf("0이랑 같다");
	//else {
	//	printf("0보다 작다");
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