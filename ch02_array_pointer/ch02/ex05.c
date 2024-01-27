#include <stdio.h>
/* 전역변수로 구현*/
//int itemCnt = 0;
//int money = 100;
//해결방법: 전역변수 선언 - 변수의 이름이 동일하지만 같음

//void buyItem(int itemCnt, int money) {
//	itemCnt++;
//	money -= 10;
//	printf("아이템 구매\n");
//	printf("아이템 개수: %d\n", itemCnt);
//	printf("잔액: %d\n", money);
//}
//
//int main() 
//{
//	//int itemCnt = 0;
//	//int money = 100;
//	buyItem(itemCnt, money);
//	buyItem(itemCnt, money);
//	printf("\n");
//	printf("아이템 개수: %d\n", itemCnt); 
//	printf("잔액: %d\n", money); 
//}

//call_by_address
//void buyItem(int* piCnt, int* pmy) {
//	(*piCnt)++;
//	*pmy -= 10;
//	printf("아이템 구매\n");
//	printf("아이템 개수: %d\n", *piCnt);
//	printf("잔액: %d\n", *pmy);
//}
//
//int main() 
//{
//	int itemCnt = 0;
//	int money = 100;
//	buyItem(&itemCnt, &money);
//	buyItem(&itemCnt, &money);
//	printf("\n");
//	printf("아이템 개수: %d\n", itemCnt); 
//	printf("잔액: %d\n", money); 
//}

//void swap(int* px, int* py) {
//	int temp = *px;
//	*px = *py;
//	*py	= temp;
//}
//
//int main() {
//	int a, b;
//	scanf("%d%d", &a, &b);
//	swap(&a, &b);
//	printf("a=%d, b=%d\n", a, b);
//}


//void sumArr(int parr[], int len){
//	int sum = 0;
//	for (int i = 0; i < len; i++) {
//		printf("%d ", parr[i]);
//		sum += parr[i];
//	}
//	return sum;
//}
//
//int main() {
//	int arr1[] = { 1,2,3,4 };
//	printf("sum: %d\n", sumArr(arr1, sizeof(arr1) / sizeof(int)));
//	int arr2[] = { 1,2,3,4,5 };
//	printf("sum: %d\n", sumArr(arr2, sizeof(arr2)/ sizeof(int)));
//}

//=========  이중 포인터 ===============  

//int main(void) 
//{ 
//	double num = 3.14;
//	double *ptr = &num;
//	double **dptr = &ptr;
//	double *ptr2;
//
//	printf("%9p %9p \n", ptr, *dptr);
//	printf("%9g %9g \n", num, **dptr);
//	ptr2 = *dptr; //ptr2 = ptr과 같은 문장
//	*ptr2 = 10.99;
//	printf("%9g %9g \n", num, **dptr);
//	return 0;
//}

//====== 포인터 변수 swap ==========
//call_by_value형식 -> call_by_address 형식으로 변경
//void SwapIntPtr(int* dp1, int* dp2) 
//{
//	int* temp = *dp1;
//	*dp1 = *dp2;
//	*dp2 = temp;
//}
//
//int main(void) 
//{
//	int num1 = 10, num2 = 20;
//	int *ptr1, *ptr2;
//	ptr1 = &num1, ptr2 = &num2;
//	printf("*ptr1, *ptr2: %d %d\n", *ptr1, *ptr2);
//
//	SwapIntPtr(&ptr1, &ptr2);
//	printf("*ptr1, *ptr2: %d %d \n", *ptr1, *ptr2);
//}

//== 포인터 배열의 포인터 형: 이중포인터

//int main(void)
//{
//	int num1 = 10, num2 = 20, num3 = 30;
//	int* ptr1 = &num1;
//	int* ptr2 = &num2;
//	int* ptr3 = &num3;
//
//	int* ptrArr[] = { ptr1, ptr2, ptr3 };
//	int** dptr = ptrArr;
//
//	printf("%d %d %d \n", *(ptrArr[0]), *(ptrArr[1]), *(ptrArr[2]));
//	printf("%d %d %d \n", *(dptr[0]), *(dptr[1]), *(dptr[2]));
//	return 0;
//}

// 2차원 배열 이름 
//int main(void)
//{
//	int arr2d[3][3];
//	printf("%d \n", arr2d);
//	printf("%d \n", arr2d[0]);
//
//	printf("d \n", arr2d[1]);
//	printf("d \n\n", &arr2d[1][0]);
//
//	printf("d \n", arr2d[2]);
//	printf("d \n\n", &arr2d[2][0]);
//
//	printf("sizeof(arr2d): %d \n", sizeof(arr2d));
//	printf("sizeof(arr2d[0]): %d \n", sizeof(arr2d[0]));
//	printf("sizeof(arr2d[1]): %d \n", sizeof(arr2d[1]));
//	printf("sizeof(arr2d[2]): %d \n", sizeof(arr2d[2]));
//	return 0;
//}

//int main(void) 
//{
//	int arr1[2][2] = {
//		{1, 2}, {3, 4}
//	};
//	int arr2[3][2] = {
//		{1, 2}, {3, 4}, {5, 6}
//	};
//	int arr3[4][2] = {
//		{1, 2}, {3, 4}, {5, 6}, {7, 8}
//	};
//	int(*ptr)[2];
//	int i;
//	ptr = arr1;
//	printf(" * *Show 2, 2 arr1 * *\n");
//	for (i = 0; i < 2; i++)
//		printf("%d %d \n", ptr[i][0], ptr[i][0]);
//	ptr = arr2;
//	printf(" * *Show 3, 2 arr2 * *\n");
//	for (i = 0; i < 3; i++)
//		printf("%d %d \n", ptr[i][0], ptr[i][1]);
//	ptr = arr3;
//	printf(" * *Show , 2 arr3 * *\n");
//	for (i = 0; i < 4; i++)
//		printf("%d %d \n", ptr[i][0], ptr[i][1]);
//	return 0;
//}

//===== 2차원 배열을 함수의 인자로 전달
//void ShowArr2DStyle(int(*arr)[4], int column) //배열요소 전체출력
//{
//	int i, j;
//	for (i = 0; i < column; i++)
//	{
//		for (j = 0; j < 4; j++)
//			printf("%d ", arr[i][j]);
//		printf("\n");
//	}
//	printf("\n");
//}
//
//int Sum2DArr(int arr[][4], int column) //배열요소의 합 반환
//{
//	int i, j, sum = 0;
//	for (i = 0; i < column; i++)
//		for (j = 0; j < 4; j++)
//			sum += arr[i][j];
//	return sum;
//}
//
//int main(void)
//{
//	int arr1[2][4] = { 1, 2, 3, 4, 5, 6, 7, 8 };
//	int arr2[3][4] = { 1, 1, 1, 1, 3, 3, 3, 3, 5, 5, 5, 5 };
//
//	ShowArr2DStyle(arr1, sizeof(arr1) / sizeof(arr1[0]));
//	ShowArr2DStyle(arr2, sizeof(arr2) / sizeof(arr2[0]));
//	printf("arr의 합: %d \n", Sum2DArr(arr1, sizeof(arr1)/sizeof(arr1[0])));
//	printf("arr의 합: %d \n", Sum2DArr(arr1, sizeof(arr2)/sizeof(arr2[0])));
//	return 0;
//}

//===== 2차원 배열의 값 변경
int main() {
	int* arr[2][3];
	int*(*ptr)[3] = arr; //type arr[3]

	int** arr3[5];
	int*** ptr3 = arr3;
	int*** arr4[3][4];
	int*** (*ptr4)[4];

	int** (**arr5[3][4])[5][6];
	int**(**(* ptr5)[4])[5][6] = arr5;

	int arr6[2][3] = { 10,20,30,40,50,60 };
	int(*arr7)[2];
	arr7 = (int(*)[2])arr6;
	for (int i = 0; i < 3; i++) {
		printf("%d %d\n", arr7[i][0], arr7[i][1]);
	}
}