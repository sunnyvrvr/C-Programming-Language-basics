#include<stdio.h>

int main() {
	//int choice;

	//printf("�� ����:1\n");
	//printf("�ҷ�����:2\n");
	//printf("����: 3\n");
	//printf("ũ����: 4\n");
	//scanf("%d", &choice);

	//switch (choice) {
	//case 1:
	//	printf("�� ����.\n");
	//	break;
	//case 2:
	//	printf("�ҷ�����.\n");
	//	break;
	//case 3:
	//	printf("����.\n");
	//	break;
	//case 4:
	//	printf("ũ����.\n");
	//	break;
	//default:
	//	printf("�߸� �Է��ϼ̽��ϴ�.\n");
	//}
	// 
	//int n;
	//scanf("%d", &n);
	//switch (n) {
	//case 1:
	//case 2:
	//	printf("n�� 1 �Ǵ� 2\n");
	//case 3:
	//case 4:
	//	printf("n�� 3 �Ǵ� 4\n");
	//}

	//char n;
	//scanf("%c", &n);
	//switch (n) {
	//case 'M': //case 77
	//case 'm': //case 109
	//	printf("Morning");
	//	break;
	//case 'E':
	//case 'e':
	//	printf("Evening");
	//}
	int n;
	scanf("%d", &n);

	int m;
	m = n / 10;
	switch (n/10) {
	case 0:
		printf("0~9\n");
		break;
	case 1:
		printf("10~19\n");
		break;
	case 2:
		printf("20~29\n");
		break;
	default:
		printf("0�̸� �Ǵ� 30����\n");
	}
}
