#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>


int main()
{
	char znak;

	do
	{
		scanf("%c", &znak);

		if (znak >= '0' && znak <= '9')
			znak = znak + 17;

		else if (znak >= 'A' && znak <= 'J')
			znak = znak - 17;

		else if (znak >= 'a' && znak <= 'j')
			znak = znak - 49;

		printf("%c", znak);
	} while (znak != ' ');

	return 0;
}