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
	strcpy(man1.name, "�ȼ���");
	strcpy(man1.phoneName, "010-1234-5678");
	man1.age = 20;

	printf("�̸� �Է�: "); scanf("%s", man2.name);
	printf("��ȣ �Է�: "); scanf("%s", man2.phoneName);
	printf("���� �Է�: "); scanf("%s",&(man2.age));

	printf("�̸�: %s \n", man1.name);
	printf("��ȣ: %s \n", man1.phoneName);
	printf("����: %d \n", man1.age);

	printf("�̸�: %s \n", man2.name);
	printf("��ȣ: %s \n", man2.phoneName);
	printf("����: %d \n", man2.age);
	return 0;
}