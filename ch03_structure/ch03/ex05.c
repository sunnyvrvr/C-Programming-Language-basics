#include <stdio.h>
//
//struct point
//{
//	int xpos;
//	int ypos;
//};
//
//int main(void)
//{
//	struct point pos1 = { 1, 2 };
//	struct point pos2 = { 100, 200 };
//	struct point* pptr = &pos1;
//	(*pptr).xpos += 4;
//	(*pptr).xpos += 5;
//	printf("[%d %d] \n", pptr->xpos, pptr->ypos);
//
//	pptr = &pos2;
//	pptr->xpos += 1;
//	pptr->ypos += 2;
//	printf("[%d, %d] \n", (*pptr).xpos, (*pptr).ypos);
//	return 0;
//}

//---------����ü ���ǿ� typedef ���� --------------
//struct point
//{
//	int xpos;
//	int ypos;
//};
//
//typedef struct point Point; //����ü point ���ǿ� typedef ����
//
//typedef struct person
//{
//	char name[20];
//	char phoneNum[20];
//	int age;
//} Person;
//
//int main(void)
//{
//	Point pos = { 10, 20 };
//	Person man = { "������", "010-1212-1111", 21 };
//	printf("%d %d \n", pos.xpos, pos.ypos);
//	printf("%s %s %d\n", man.name, man.phoneNum, man.age);
//	return 0;
//}

//---------����ü�� �̸� ���� -----------------------------
//int main() 
//{
//	struct { float x, y; } pos; //pos type�� ���� ���� 
//	pos.x = 1.5;
//	pos.y = 2.2;
//	printf("��ǥ" "(%f, %f)\n", pos.x, pos.y);
//}
// 
//---------����ü�� �̸� ����  -----------------------------
//int main()
//{
//	struct point { float x, y; }; 
//	struct point pos;
//	pos.x = 1.5;
//	pos.y = 2.2;
//	printf("��ǥ" "(%f, %f)\n", pos.x, pos.y);
//	struct point po2;
//}
//---------����ü�� �̸� �޾��Լ� ������ ����  --------------
//int main()
//{
//	typedef struct point { float x, y; } Point;
//	Point pos;
//	pos.x = 1.5;
//	pos.y = 2.2;
//	printf("��ǥ" "(%f, %f)\n", pos.x, pos.y);
//	//struct point pos1; struct point ���� Ÿ�� ���� �Ұ�
//}
//---------����ü�� ������ �̸� ����  --------------
int main()
{
	typedef struct point { float x, y; } Point;
	Point pos2;
	pos2.x = 1.5;
	pos2.y = 2.2;
	printf("��ǥ" "(%f, %f)\n", pos2.x, pos2.y);
	struct point pos1;
	pos2.x = 1.1;
	pos2.y = 1.1;
	printf("��ǥ: (%f, %f)\n", pos2.x, pos2.y);
}