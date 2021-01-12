#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool daLiJeParan(int broj)
{
	return broj & 00001;
}

int main()
{
	int broj;

	do
	{
		printf("Unesite broj od 3 do 27, 0 za izlaz: ");
		scanf("%d", &broj);
		if (daLiJeParan(broj))
			printf("Broj je neparan!\n\n");
		else
			printf("Broj je paran!\n\n");
	} while (broj);

	return 0;
}