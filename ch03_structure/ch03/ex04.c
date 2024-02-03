#include <stdio.h>

//struct point
//{
//	int xpos;
//	int ypos;
//};
//
//int main(void)
//{
//	struct point arr[3];
//	int i;
//	for (i = 0; i < 3; i++)
//	{
//		printf("점의 좌표 입력:");
//		scanf("%d %d", &arr[i].xpos, &arr[i].ypos);
//	}
//	for (i = 0; i < 3; i++)
//		printf("[%d %d]", arr[i].xpos, arr[i].ypos);
//	return 0;
//}

struct person
{
	char name[20];
	char phoneNum[20];
	int age;
};

int main(void)
{
	struct person arr[3] = {

	};
	int i;
	for (i = 0; i < 3; i++)
		printf("%s %s %d \n", arr[i].name, arr[i].phoneNum, arr[i].age)
	return 0;
}