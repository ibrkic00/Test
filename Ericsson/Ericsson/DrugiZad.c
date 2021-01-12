#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdbool.h>
#define brojevi 7

int main()
{
	srand((unsigned)time(0));
	int nizUnos[brojevi], i, j, nizRand[brojevi], brojRand, brojPogodaka = 0;
	bool test;

	for (i = 0; i < brojevi; i++)
	{
		printf("Unesite %d broj: ", i + 1);
		scanf("%d", &nizUnos[i]);
		
		do
		{
			test = true;
			brojRand = rand() % 39;
			for (j = 0; j < i; j++)
			{
				if (nizRand[j] == brojRand)
				{
					test = false;
				}
			}
			if (test)
			{
				nizRand[i] = brojRand;
			}
		} while (!test);
	}

	printf("\nIzvuceni brojevi: \n--------------------------------------------------\n");
	for (i = 0; i < brojevi; i++)
	{
		printf("%d   ", nizRand[i]);
	}
	printf("\n--------------------------------------------------\n\n");

	printf("\nVasi brojevi: \n--------------------------------------------------\n");
	for (i = 0; i < brojevi; i++)
	{
		printf("%d   ", nizUnos[i]);
	}
	printf("\n--------------------------------------------------\n\n");
	
	for (i = 0; i < brojevi; i++)
	{
		for (j = 0; j < brojevi; j++)
		{
			if (nizRand[i] == nizUnos[j])
				brojPogodaka++;
		}
	}

	printf("\nBroj pogodaka je: %d\n\n", brojPogodaka);

	return 0;
}