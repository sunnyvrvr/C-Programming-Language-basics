#include <stdio.h>
#include <string.h>

struct person
{
	char name[20];
	char phoneName[20];
	int age;
};

int main(void)
{
	struct person man1, man2;
	strcpy(man1.name, "안성준");
	strcpy(man1.phoneName, "010-1234-5678");
	man1.age = 20;

	printf("이름 입력: "); scanf("%s", man2.name);
	printf("번호 입력: "); scanf("%s", man2.phoneName);
	printf("나이 입력: "); scanf("%s",&(man2.age));

	printf("이름: %s \n", man1.name);
	printf("번호: %s \n", man1.phoneName);
	printf("나이: %d \n", man1.age);

	printf("이름: %s \n", man2.name);
	printf("번호: %s \n", man2.phoneName);
	printf("나이: %d \n", man2.age);
	return 0;
}