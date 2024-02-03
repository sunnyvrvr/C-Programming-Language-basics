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

//---------구조체 정의와 typedef 선언 --------------
//struct point
//{
//	int xpos;
//	int ypos;
//};
//
//typedef struct point Point; //구조체 point 정의와 typedef 선언
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
//	Person man = { "곽전갑", "010-1212-1111", 21 };
//	printf("%d %d \n", pos.xpos, pos.ypos);
//	printf("%s %s %d\n", man.name, man.phoneNum, man.age);
//	return 0;
//}

//---------구조체의 이름 생략 -----------------------------
//int main() 
//{
//	struct { float x, y; } pos; //pos type의 변수 선언 
//	pos.x = 1.5;
//	pos.y = 2.2;
//	printf("좌표" "(%f, %f)\n", pos.x, pos.y);
//}
// 
//---------구조체의 이름 정의  -----------------------------
//int main()
//{
//	struct point { float x, y; }; 
//	struct point pos;
//	pos.x = 1.5;
//	pos.y = 2.2;
//	printf("좌표" "(%f, %f)\n", pos.x, pos.y);
//	struct point po2;
//}
//---------구조체의 이름 메안함수 내에서 정의  --------------
//int main()
//{
//	typedef struct point { float x, y; } Point;
//	Point pos;
//	pos.x = 1.5;
//	pos.y = 2.2;
//	printf("좌표" "(%f, %f)\n", pos.x, pos.y);
//	//struct point pos1; struct point 같은 타입 선언 불가
//}
//---------구조체의 포인터 이름 정의  --------------
int main()
{
	typedef struct point { float x, y; } Point;
	Point pos2;
	pos2.x = 1.5;
	pos2.y = 2.2;
	printf("좌표" "(%f, %f)\n", pos2.x, pos2.y);
	struct point pos1;
	pos2.x = 1.1;
	pos2.y = 1.1;
	printf("좌표: (%f, %f)\n", pos2.x, pos2.y);
}