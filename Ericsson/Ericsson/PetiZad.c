#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<stdbool.h>

typedef struct razlomak
{
	int brojnik;
	int nazivnik;
}Razlomak;

Razlomak Izracunaj(Razlomak prvi, Razlomak drugi)
{
	Razlomak rezultat;
	rezultat.nazivnik = prvi.nazivnik * drugi.nazivnik;
	rezultat.brojnik = (rezultat.nazivnik / prvi.nazivnik * prvi.brojnik) + (rezultat.nazivnik / drugi.nazivnik * drugi.brojnik);
	return rezultat;
}

Razlomak SkratiRazlomak(Razlomak rezultat)
{
	int najveciZD, temp, n, m;

	n = rezultat.brojnik;
	m = rezultat.nazivnik;

	while (n != 0)
	{
		temp = m % n;
		m = n;
		n = temp;
	}

	najveciZD = m;

	rezultat.brojnik = rezultat.brojnik / m;
	rezultat.nazivnik = rezultat.nazivnik / m;

	return rezultat;

}

int main()
{
	Razlomak r1, r2, rezultat;

	printf("Unesite brojnik prvog razlomka: ");
	scanf("%d", &r1.brojnik);

	printf("Unesite nazivnik prvog razlomka: ");
	scanf("%d", &r1.nazivnik);

	printf("Unesite brojnik drugog razlomka: ");
	scanf("%d", &r2.brojnik);

	printf("Unesite nazivnik drugog razlomka: ");
	scanf("%d", &r2.nazivnik);

	rezultat = Izracunaj(r1, r2);

	printf("\n %d / %d  +  %d / %d  =  %d / %d \n", r1.brojnik, r1.nazivnik, r2.brojnik, r2.nazivnik, rezultat.brojnik, rezultat.nazivnik);

	rezultat = SkratiRazlomak(rezultat);

	printf("\n Skraceni razlomak je:  %d / %d   \n", rezultat.brojnik, rezultat.nazivnik);



	return 0;
}