#include <stdio.h>

int main() {
	//배열의 포인터 연산 
	
	//int num1;
	//double num2;
	//int* ptr1 = &num1;
	//double* ptr2 = &num2;
	//printf("%p %p %p\n", ptr1, ptr1 + 1, ptr1 + 2);
	//printf("%p %p %p\n", ptr1, ptr1 + 1, ptr1 + 2);
	//ptr1++;
	//ptr2++;
	//printf("%p %p\n", ptr1, ptr2);

	int arr[3] = { 11, 22, 33 };
	int * ptr = arr;
	printf("%d %d %d \n", *ptr, *(ptr + 1), *(ptr + 2));
	printf("%d %d %d \n", ptr[0], ptr[1], ptr[2]);
	printf("%d %d %d \n", *(arr+0), *(arr+1), *(arr+2));
	printf("%d %d %d \n", arr[0], arr[1], arr[2]);
}