#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main()
{
	srand((unsigned)time(0));
	int uneseniBroj, random, oktalnizbroj;

	printf("Unesite hexa broj: ");
	scanf("%x", &uneseniBroj);

	random = rand();

	oktalnizbroj = uneseniBroj + random;

	printf("Uneseni je: %x , random je: %d , a zbroj je: %o\n", uneseniBroj, random, oktalnizbroj);



	return 0;
}