#include <stdio.h>
//-------���ڿ� fgets �Լ�-----------
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

//------�Է¹��� -------------------
void ClearLineFromReadBuffer(void)
{
	while (getchar() != '\n');
}
//int main(void) 
//{
//	char perID[7];
//	char name[10];
//
//	fputs("�ֹι�ȣ �� 6�ڸ� �Է�: ", stdout);
//	fgets(perID, sizeof(perID), stdin);
//	fputs("�̸� �Է�: ", stdout);
//	fgets(name, sizeof(name), stdin);
//	ClearLineFromReadBuffer();
//
//	fgets(name, sizeof(name), stdin);
//	printf("�ֹι�ȣ: %s\n", perID);
//	printf("�̸�: %s\n", name);
//}
//

//--------Ű�����Է�------------------
//int main() {
//	int age;
//	char gender;
//	printf("���� �Է�: ");
//	scanf("%d", &age);
//	printf("���� �Է�(m/f): ");
//	//getchar(); //�ѱ��ڸ� �Է� ����
//	ClearLineFromReadBuffer();
//
//	scanf("%c", &gender);
//	printf("����: %d\n", age);
//	printf("����: %c\n", gender);
//}

//--------���ڿ� �Լ� sscanf---------
//int main() {
//	char sa[] = "456";
//	int a;
//	sscanf(sa, "%d", &a);
//	printf("%d", a);
//}

#include <string.h>
//--------���ڿ� �Լ� sprintf---------
//int main() {
//	int a;
//	printf("���� �Է�: ");
//	scanf("%d", &a);
//	char sa[10];
//	sprintf(sa, "%d", a);
//	int len = strlen(sa);
//	printf("%d�� %d�ڸ� �����Դϴ�.\n", a, len);
//}

//--------���� �ڵ�����---------------
int main() {
	FILE* out;
	char sa[20];
	for (int i = 0; i < 10; i++) {
		sprintf(sa, "file-%d.txt", i);
		out = fopen(sa, "w");
		fclose(out);
	}
}