#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//--------RAND �Լ�: ���� ����---------------------
//---------���Ϻ���--------------------------------
int main() {
	int i, seed;
	printf("������ ����: 0���� %d����\n", RAND_MAX);
	//printf("seed �Է�:");
	//scanf("%d", &seed);
	//srand(seed);
	srand((int)time(NULL));//(int)�� �����ص� ��
	for (i = 0; i < 10; i++) {
		printf("����: %d\n", rand());
	}
}