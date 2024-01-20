#include<stdio.h>

int main()
{
	printf("My name is Doodle\n");
	printf("동해물과 백두산이\n마르고\n닳도록\n");
	printf("2 + 3 = 5\n");
	printf("%d + %d = %d\n", 2, 3, 5);
	printf("%d + %d = %d\n", 2, 3, 2+3);
	printf("%.2f\n", 3.14); // f는 부동소수점수
	printf("%.2f\n", 3.14159); // f는 무조건 6자리 출력하기 때문에 .2를 이용해 실수 2자리까지만 출력
	printf("%10.2f\n", 3.14559); // _______3.15
	printf("%-10.2fa\n", 3.14559); // 3.15______a
	printf("%+10.2fa\n", 3.14559); // _____+3.15a
	printf("%010.2fa\n", 3.14559); // 0000001.15a
	printf("%10.2f\n", 1234567890.1415); // 1234567890.14 출력
	printf("앞집 강아지가 말했다.\"멍~!멍~!\"정말 귀엽다.\n"); // "멍~!멍~!"을 출력하기 위해 \를 넣는다.
	printf("abc\bd\n"); // \b는 백스페이스이므로, d가 c를 덮어씌우게 된다.
	printf("abc\rd\n"); // \r은 해당 줄에 맨앞부터 덮어씌운다. a -> d
	printf("|\b/\b-\b/\b"); // 이를 이용해 막대가 빙글빙글 돌아가는 모양 구현가능
	int num1 = 8, num2 = 12;
	printf("%d, %d\n", num1, num2); // 10진수 출력
	printf("%o, %o\n", num1, num2); // 8진수 출력
	printf("%x, %x\n", num1, num2); // 16진수 출력
	printf("%X, %X\n", num1, num2); // 대문자 출력 
	printf("%c %c %c\n", 'a', 'b', 'c');
	printf("%d %d %d\n", 'a', 'b', 'c');
	printf("%s\n", "안녕하세요");
}