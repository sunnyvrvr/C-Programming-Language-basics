#include <stdio.h>
//-------문자열 fgets 함수-----------
//int main(void)
//{
//	char str[7];
//	int i;
//
//	for (i = 0; i < 3; i++)
//	{
//		fgets(str, sizeof(str), stdin);
//		printf("Read %d; %s \n", i + 1, str);
//	}
//	return 0;
//
//}

//------입력버퍼 -------------------
void ClearLineFromReadBuffer(void)
{
	while (getchar() != '\n');
}
//int main(void) 
//{
//	char perID[7];
//	char name[10];
//
//	fputs("주민번호 앞 6자리 입력: ", stdout);
//	fgets(perID, sizeof(perID), stdin);
//	fputs("이름 입력: ", stdout);
//	fgets(name, sizeof(name), stdin);
//	ClearLineFromReadBuffer();
//
//	fgets(name, sizeof(name), stdin);
//	printf("주민번호: %s\n", perID);
//	printf("이름: %s\n", name);
//}
//

//--------키보드입력------------------
//int main() {
//	int age;
//	char gender;
//	printf("나이 입력: ");
//	scanf("%d", &age);
//	printf("성별 입력(m/f): ");
//	//getchar(); //한글자만 입력 가정
//	ClearLineFromReadBuffer();
//
//	scanf("%c", &gender);
//	printf("나이: %d\n", age);
//	printf("성별: %c\n", gender);
//}

//--------문자열 함수 sscanf---------
//int main() {
//	char sa[] = "456";
//	int a;
//	sscanf(sa, "%d", &a);
//	printf("%d", a);
//}

#include <string.h>
//--------문자열 함수 sprintf---------
//int main() {
//	int a;
//	printf("정수 입력: ");
//	scanf("%d", &a);
//	char sa[10];
//	sprintf(sa, "%d", a);
//	int len = strlen(sa);
//	printf("%d은 %d자리 정수입니다.\n", a, len);
//}

//--------파일 자동생성---------------
int main() {
	FILE* out;
	char sa[20];
	for (int i = 0; i < 10; i++) {
		sprintf(sa, "file-%d.txt", i);
		out = fopen(sa, "w");
		fclose(out);
	}
}