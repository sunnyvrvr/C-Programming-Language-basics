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
	//printf("str ũ��: %d\n", sizeof(str));
	//printf("�ι��� ���: %c\n", str[13]);
	//printf("�ι��� ����: %d\n", str[13]);
	//str[12];
	//printf("���ڿ�: %s\n", str);

	//char s[10];
	//scanf("%s", s);
	////printf("%s\n", s);
	////printf("%c\n", s[1]);
	////s[1] = '\0'; //=0�� ����
	////printf("%s\n", s);
	//int len;
	//for (int i = 0; i < sizeof(s); i++) {
	//	if (s[i] == 0) {
	//		printf("�Է¹��ڿ�����: %d\n", i);
	//	}
	//}

	//char s[100] = "hello";
	//int len = strlen(s); 
	//printf("�迭�� ĭ��: %d\n", sizeof(s) / sizeof(char));
	//printf("���ڿ� ����: %d\n", len);

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
	printf("���ڿ�1: ");
	scanf("%s", str1);
	printf("���ڿ�2: ");
	scanf("%s", str2);
	//if(str1 == str2)//�� ���ڿ��� �ּ� ��(���� �񱳰� �ƴ�)
	if (!strcmp(str1, str2))//str1=str2�̸� �Լ��� 0, str1<str2 �̸� �Լ��� <0, str1>str2 �̸� �Լ��� >0
		printf("�� ���ڿ� ��ġ: %d\n", strcmp(str1, str2));
	else
		printf("�� ���ڿ� ����ġ: %d\n", strcmp(str1, str2));
	if (!strncmp(str1, str2, 3))
		printf("ù 3���� ��ġ: %d", strncmp(str1, str2, 3));
	else
		printf("ù 3���� ����ġ: %d", strncmp(str1, str2, 3));
}