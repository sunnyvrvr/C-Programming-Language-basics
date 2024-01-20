#include <stdio.h>
#include <string.h>

int main() {
	//char s[5] = { 'h', 'e', 'l', 'l', 'o' };
	//for (int i = 0; i < sizeof(s) / sizeof(char); i++); {
	//	printf("%c", s[i]);
	//}
	//char s[6] = "hello";
	//printf("%s", s);

	//char s[10];
	//printf("%d %d\n", s, &s[0]);
	//scanf("%s", s);
	//printf("%s", s);

	//char str[] = "Good Morning!";
	//printf("str 크기: %d\n", sizeof(str));
	//printf("널문자 출력: %c\n", str[13]);
	//printf("널문자 정수: %d\n", str[13]);
	//str[12];
	//printf("문자열: %s\n", str);

	//char s[10];
	//scanf("%s", s);
	////printf("%s\n", s);
	////printf("%c\n", s[1]);
	////s[1] = '\0'; //=0와 동등
	////printf("%s\n", s);
	//int len;
	//for (int i = 0; i < sizeof(s); i++) {
	//	if (s[i] == 0) {
	//		printf("입력문자열길이: %d\n", i);
	//	}
	//}

	//char s[100] = "hello";
	//int len = strlen(s); 
	//printf("배열의 칸수: %d\n", sizeof(s) / sizeof(char));
	//printf("문자열 길이: %d\n", len);

	//char s1[] = "hello";
	//char s2[100];
	//strcpy(s2, s1);

	//printf("s1: %s\n", s1);
	//printf("s2: %s\n", s2);

	//char str1[20] = "1234567890";
	//char str2[20];
	//char str3[5];
	//strcpy(str2, str1);
	//puts(str2);
	//strncpy(str3, str1, sizeof(str3));
	//puts(str3);

	//strncpy(str3, str1, sizeof(str3) - 1);
	//str3[sizeof(str3) - 1] = 0;
	//puts(str3);

	//char str1[20] = "First~";
	//char str2[20] = "Second";
	//char str3[20] = "Simple num: ";
	//char str4[20] = "1234567890";
	//strcat(str1, str2);
	//puts(str1);
	//strncat(str3, str4, sizeof(str3) - strlen(str3) - 1);
	//puts(str3);

	char str1[20];
	char str2[20];
	printf("문자열1: ");
	scanf("%s", str1);
	printf("문자열2: ");
	scanf("%s", str2);
	//if(str1 == str2)//두 문자열의 주소 비교(내용 비교가 아님)
	if (!strcmp(str1, str2))//str1=str2이면 함수값 0, str1<str2 이면 함수값 <0, str1>str2 이면 함수값 >0
		printf("두 문자열 일치: %d\n", strcmp(str1, str2));
	else
		printf("두 문자열 불일치: %d\n", strcmp(str1, str2));
	if (!strncmp(str1, str2, 3))
		printf("첫 3글자 일치: %d", strncmp(str1, str2, 3));
	else
		printf("첫 3글자 불일치: %d", strncmp(str1, str2, 3));
}