#include <stdio.h>

int main(void)
{
	//int num1 = 10;
	//int num2 = 20;
	//int num3 = 30;
	//int* arr[3] = { &num1, &num2, &num3 };

	//printf("%d \n", *arr[0]);
	//printf("%d \n", *arr[1]);
	//printf("%d \n", *arr[2]);
	//return 0;

	//const char* strArr[3] = { "Simple", "String", "Array" };
	//printf("%s \n", strArr[0]);
	//printf("%s \n", strArr[1]);
	//printf("%s \n", strArr[2]);

	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	for (int* ptr = arr; ptr < arr + 10; ptr++)
		printf("%d\n", *ptr);
}
