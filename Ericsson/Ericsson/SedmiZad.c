#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char pretvori(char znak)
{
	if (znak >= 'a' && znak <= 'z')
	{
		znak = znak - 32;
	}
	else if (znak >= 'A' && znak <= 'Z')
	{
		znak = znak + 32;
	}
	return znak;
}

int main()
{
	char niz[30];
	int duljina;
	printf("Unesite niz: ");
	scanf("%s", niz);
	duljina = strlen(niz);
	

	for (int i = 0; i < duljina; i++)
	{
		niz[i] = pretvori(niz[i]);
	}

	printf("\n%s\n", niz);

	return 0;
}