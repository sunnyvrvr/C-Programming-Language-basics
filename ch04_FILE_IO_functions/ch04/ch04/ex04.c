#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//--------RAND 함수: 난수 생성---------------------
//---------패턴변경--------------------------------
int main() {
	int i, seed;
	printf("난수의 범위: 0부터 %d까지\n", RAND_MAX);
	//printf("seed 입력:");
	//scanf("%d", &seed);
	//srand(seed);
	srand((int)time(NULL));//(int)는 생략해도 됨
	for (i = 0; i < 10; i++) {
		printf("난수: %d\n", rand());
	}
}