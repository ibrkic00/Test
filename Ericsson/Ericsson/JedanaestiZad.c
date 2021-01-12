#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void stvori(int broj, char rim[])
{
	int pom = 0;
	while (broj != 0)
	{
		if (broj >= 90)
		{
			rim[pom] = 'X';
			pom++;
			rim[pom] = 'C';
			pom++;
			broj = broj - 90;
		}
		else if (broj >= 50)
		{
			rim[pom] = 'L';
			pom++;
			broj = broj - 50;
		}
		else if (broj >= 40)
		{
			rim[pom] = 'X';
			pom++;
			rim[pom] = 'L';
			pom++;
			broj = broj - 40;
		}
		else if (broj >= 10)
		{
			rim[pom] = 'X';
			pom++;
			broj = broj - 10;
		}
		else if (broj >= 9)
		{
			rim[pom] = 'I';
			pom++;
			rim[pom] = 'X';
			pom++;
			broj = broj - 9;
		}
		else if (broj >= 5)
		{
			rim[pom] = 'V';
			pom++;
			broj = broj - 5;
		}
		else if (broj >= 4)
		{
			rim[pom] = 'I';
			pom++;
			rim[pom] = 'V';
			pom++;
			broj = broj - 4;
		}
		else if (broj >= 1)
		{
			rim[pom] = 'I';
			pom++;
			broj = broj - 1;
		}
	}
	
}

int main()
{
	int broj;
	char stvoriRim[15]="";
	printf("Unesite broj manji od 100: ");
	scanf("%d", &broj);

	stvori(broj, stvoriRim);

	printf("\n\n%s\n\n", stvoriRim);



	return 0;
}