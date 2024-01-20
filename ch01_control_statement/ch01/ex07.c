#include<stdio.h>

int main() {
	//int choice;

	//printf("새 게임:1\n");
	//printf("불러오기:2\n");
	//printf("설정: 3\n");
	//printf("크레딧: 4\n");
	//scanf("%d", &choice);

	//switch (choice) {
	//case 1:
	//	printf("새 게임.\n");
	//	break;
	//case 2:
	//	printf("불러오기.\n");
	//	break;
	//case 3:
	//	printf("설정.\n");
	//	break;
	//case 4:
	//	printf("크레딧.\n");
	//	break;
	//default:
	//	printf("잘못 입력하셨습니다.\n");
	//}
	// 
	//int n;
	//scanf("%d", &n);
	//switch (n) {
	//case 1:
	//case 2:
	//	printf("n은 1 또는 2\n");
	//case 3:
	//case 4:
	//	printf("n은 3 또는 4\n");
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
		printf("0미만 또는 30이하\n");
	}
}
