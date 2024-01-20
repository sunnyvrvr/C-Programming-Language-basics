#include <stdio.h>

//반복문
int main() {
	//int i = 1;
	//while (i <= 10){
	//	printf("%d", i);
	//	i++;
	//}

	//int i = 1;
	//do {
	//	printf("%d", i);
	//	i++;
	//} while (i <= 10);

	//int i = 1;
	//int sum = 0;
	//int n;
	//printf("정수입력: ");
	//scanf("%d", &n);
	//while (i <= 10) {
	//	sum += i;
	//	printf("%d까지 합계: %d\n", i, sum);
	//	i++;
	//}
	//printf("총 합계:%d\n", sum);
	//printf("i 값: %d\n", i);

	//int n;
	//do {
	//	printf("중단하려면 0입력");
	//	scanf("%d", &n);
	//	printf("입력한 값: %d\n", n);
	//} while (n != 0);
	//printf("0을 입력하셔서 종료합니다. \n");

	//int n;
	//printf("정수 입력:");
	//scanf("%d", &n);
	//int sum = 0;
	//int i;
	//for (int i = 1; i <= n; i++) {
	//	sum += i;
	//}
	//printf("1부터 %d까지의 합: %d\n", n, sum);
	//printf("i의 값: %d\n", i);//변수i의 유효범위

	//int n;
	//printf("정수 입력:");
	//scanf("%d", &n);
	//for (; n >= 1; n--) {
	//	printf("%d", n);
	//}
	//for (int i = 1; ; i++) {
	//	printf("%d", i);
	//}

	//int i, pow;
	//for ( i = 1, pow = 1; i <= n; i++, pow *= 2) {
	//	pow *= 2;
	//}
	//printf("%d\n", pow);

	//int i, prod;
	//for (i = 1, prod = 1; i <= n; prod *= i, i++) {}
	//printf("%d! = %d\n", i, prod);

	//	int k;
	//	scanf("%d", &k);
	//for (int i = 1; ; i++) {
	//	if (k == 0) {
	//		break;
	//	}
	//	printf("%d번째 입력 값: %d\n", i, k);
	//}

	//int n;
	//scanf("%d", &n);
	//for (int i = 1; i <= n; i++) {
	//	if (i % 3 == 0) continue;
	//	printf("%d\n", i);
	//}

	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
}