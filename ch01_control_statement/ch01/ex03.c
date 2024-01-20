#include<stdio.h>

int main()
{
	int a = 5;
	int b = 3;
	printf("%d + %d = %d\n", a, b, a + b);
	printf("%d - %d = %d\n", a, b, a - b);
	printf("%d * %d = %d\n", a, b, a * b);
	printf("%d / %d = %d\n", a, b, a / b);
	printf("%d %% %d = %d\n\n\n", a, b, a % b);

	float a = 9.8;
	float b = 3.14;
	printf("%.2f + %.2f = %.2f\n", a, b, a + b);
	printf("%.2f - %.2f = %.2f\n", a, b, a - b);
	printf("%.2f * %.2f = %.2f\n", a, b, a * b);
	printf("%.2f / %.2f = %.2f\n", a, b, a / b);
	
	printf("%d %d %d %d\n", sizeof(int), sizeof(char), sizeof(float), sizeof(double));
	int c; char d; double e;
	printf("%d %d %d %d\n", sizeof(a), sizeof(c), sizeof(d), sizeof(e));

	int f = 3.14;
	float g = 10;
	printf("f=%d, g=%f\n", f, g);

	int f = 3.94;
	float g = 10;
	printf("f=%d, g=%f\n", f, g);
	printf("%d\n", 2147483647+1);

	int math = 90, korean = 95, english = 96;
	int sum = math + korean + english;
	double avg = sum / 3;
	printf("Æò±ÕÁ¡¼ö : %f\n", avg);

	printf("%d\n", 4 / 3);
	printf("%f\n", 4 / 3.0);
	printf("%f\n", 4.0 / 3);

	int math = 90, korean = 95, english = 96;
	int sum = math + korean + english;
	double avg = (double)sum / 3;
	printf("Æò±Õ : %f\n", avg);
	printf("%c +%c = %c\n", '2', '3', '2' + '3');
	
	int h = 5;
	h = h + 3;
	printf("%d\n", h);

	int h = 5;
	h += 3;
	printf("%d\n", h);
}