#include <stdio.h>

int main() {
	//int arr[2][3] = { {1,2,3}, {4,5,6} };
	//int arr[2][3] = { 1,2,3,4,5,6 }; 
	//int arr[2][3] = { {1,2,3}, {4,5} };
	int arr[][3] = { 1,2,3,4 }; 
	//int arr[2][] = { 1,2,3,4 }; //배열 길이 생략은 첫번째 인덱스 자리만 가능

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d ", &arr[i][j]);
		}
	}
	printf("\n");
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%4d", arr[i][j]);
		}
		printf("\n");
	}
}