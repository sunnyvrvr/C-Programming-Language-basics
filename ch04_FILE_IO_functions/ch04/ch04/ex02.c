#include <stdio.h>

//------------EOF---------------
int main(void) 
{
	//int ch1, ch2;
	//ch1 = getchar();
	//ch2 = fgetc(stdin);
	//putchar(ch1);
	//fputc(ch2, stdout);

	int ch;
	while (1)
	{
		ch = getchar();
		if (ch == EOF)
			break;
		putchar(ch);
	}
	return 0;
}