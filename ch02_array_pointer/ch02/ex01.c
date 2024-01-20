#include <stdio.h>

int main() {
	//int arr[] = { 10, 20, 30, 40, 50 }; //초기값을 주지 않으면 배열의 길이를 표기해야함
	//int sum = 0, i;
	////arr[0] = 10, arr[1] = 20, arr[2] = 30, arr[3] = 40, arr[4] = 50;
	//for (i = 0; i < 5; i++)
	//	printf("%d\n", arr[i]);
	//for (i = 0; i < 5; i++)
	//	sum += arr[i];
	//printf("합: %d\n", sum);

	////int arr[5];
	////arr = { 10, 20, 30, 40, 50 };// 구문 오류(선언시에만 초기화 할 수 있음)

	////int arr[5] = { 10, 20, 30, 40, 50 };
	////int brr[5] = arr; //복사 불능
	//int brr[5];
	//for (int i = 0; i < 5; i++) {
	//	brr[i] = arr[i];
	//}
	//printf("%d\n", sizeof(arr)); //배열 전체 바이트수
	//printf("%d\n", sizeof(arr[0])); //배열 한칸 바이트수
	//printf("%d\n", sizeof(int));
	//printf("%d %d\n", sizeof(arr) / sizeof(arr[0]), sizeof(arr) / sizeof(int)); //배열의 길이
	//for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
	//	brr[i] = arr[i];
	//	printf("%d", brr[i]);
	//}
	int n;
	int arr[1000];

	printf("입력할 숫자의 개수 : ");
	scanf("%d", &n);
	printf("%숫자 %d개를 입력하세요:", n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i], 4);
	}
	for (int i = n - 1; i >= 0; i--) {
		printf("%d", &arr[i]);
	}

	int max = arr[0];
	int min = arr[0];
	int cnt;
	for (int i = 1; i < n; i++) {
		if (max < arr[i]) {
			max = arr[i];
		}
		if (min < arr[i]) {
			min = arr[i];
		}
	}
	printf("최대값: %d\n", max);
	printf("최소값: %d\n", min);

	int cnt = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] % 2 == 0) {
			cnt++;
		}
	}
	printf("짝수의 개수: %d\n", cnt);
}