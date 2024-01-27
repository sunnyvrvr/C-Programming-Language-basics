#include <stdio.h>

int main(void)
{
	char str1[] = "My String";
	const char* str2 = "Your String";
	printf("%s %s \n", str1, str2);

	//str1 = "Our String";
	str2 = "Our String";
	printf("%s %s \n", str1, str2);

	str1[0] = 'X';
	//str2[1] = 'X';
	printf("%s %s \n", str1, str2);
}