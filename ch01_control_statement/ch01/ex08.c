#include <stdio.h>

//�ݺ���
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
	//printf("�����Է�: ");
	//scanf("%d", &n);
	//while (i <= 10) {
	//	sum += i;
	//	printf("%d���� �հ�: %d\n", i, sum);
	//	i++;
	//}
	//printf("�� �հ�:%d\n", sum);
	//printf("i ��: %d\n", i);

	//int n;
	//do {
	//	printf("�ߴ��Ϸ��� 0�Է�");
	//	scanf("%d", &n);
	//	printf("�Է��� ��: %d\n", n);
	//} while (n != 0);
	//printf("0�� �Է��ϼż� �����մϴ�. \n");

	//int n;
	//printf("���� �Է�:");
	//scanf("%d", &n);
	//int sum = 0;
	//int i;
	//for (int i = 1; i <= n; i++) {
	//	sum += i;
	//}
	//printf("1���� %d������ ��: %d\n", n, sum);
	//printf("i�� ��: %d\n", i);//����i�� ��ȿ����

	//int n;
	//printf("���� �Է�:");
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
	//	printf("%d��° �Է� ��: %d\n", i, k);
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