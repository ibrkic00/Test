#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct datum
{
	int dd, mm, yy;
	bool stariji;
}Datum;

void isOlder(Datum covjek[])
{
	if (covjek[0].yy != covjek[1].yy)
	{
		if (covjek[0].yy < covjek[1].yy)
		{
			covjek[0].stariji = true;
			covjek[1].stariji = false;
		}
		else
		{
			covjek[0].stariji = false;
			covjek[1].stariji = true;
		}
	}
	else if (covjek[0].mm != covjek[1].mm)
	{
		if (covjek[0].mm < covjek[1].mm)
		{
			covjek[0].stariji = true;
			covjek[1].stariji = false;
		}
		else
		{
			covjek[0].stariji = false;
			covjek[1].stariji = true;
		}
	}
	else if (covjek[0].dd != covjek[1].dd)
	{
		if (covjek[0].dd < covjek[1].dd)
		{
			covjek[0].stariji = true;
			covjek[1].stariji = false;
		}
		else
		{
			covjek[0].stariji = false;
			covjek[1].stariji = true;
		}
	}
	else
	{
		covjek[0].stariji = true;
		covjek[1].stariji = true;
	}
		
}

int KolikoDana(Datum covjek[])
{

	int year, day=0;
	if (covjek[0].yy != covjek[1].yy)
	{
		if (covjek[0].stariji)
		{
			year = covjek[1].yy;
			for (; year > covjek[0].yy+1; year--)
			{
				if (year % 4 == 0)
					day = day + 366;
				else
					day = day + 365;
			}
		}
		else
		{
			year = covjek[0].yy;
			for (; year > covjek[1].yy+1; year--)
			{
				if (year % 4 == 0)
					day = day + 366;
				else
					day = day + 365;
			}
		}
	}

	return day;
}

int main()
{
	Datum covjek[2];
	int i;

	for (i = 0; i < 2; i++)
	{
		printf("Unesite dd %d.: ", i+1);
		scanf("%d", &covjek[i].dd);

		printf("Unesite mm %d.: ", i+1);
		scanf("%d", &covjek[i].mm);

		printf("Unesite yy %d.: ", i+1);
		scanf("%d", &covjek[i].yy);
	}

	isOlder(covjek);

	for (i = 0; i < 2; i++)
	{
		printf("\nDatum rodenja %d.: %d.%d.%d\n", i + 1, covjek[i].dd, covjek[i].mm, covjek[i].yy);
	}

	if (covjek[0].stariji && covjek[1].stariji)
	{
		printf("Rodeni su na isti dan!!\n");
	}
	else if (covjek[0].stariji)
	{
		printf("Stariji je prvi covjek!\n");
	}
	else
	{
		printf("Stariji je drugi covjek!\n");
	}

	if(!(covjek[0].stariji && covjek[1].stariji))
		printf("\nStariji je za %d dana...\n", KolikoDana(covjek));

	



	return 0;
}