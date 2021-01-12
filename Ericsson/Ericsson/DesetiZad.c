#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

void rek(int broj, char ime[])
{
	if (broj > 0)
	{
		printf("%s ", ime);
		rek(broj - 1, ime);
	}
}

int main()
{
	char ime[5];
	int brojPuta;

	printf("Unesite svoje ime: ");
	scanf("%s", ime);
	printf("Unesite broj ponavljanja: ");
	scanf("%d", &brojPuta);

	rek(brojPuta, ime);

	return 0;
}