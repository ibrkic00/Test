#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int convert(long long n) {
    int dec = 0, i = 0, rem;
    while (n != 0) {
        rem = n % 10;
        n /= 10;
        dec += rem * pow(2, i);
        ++i;
    }
    return dec;
}

void rec(int pocetak, int n)
{
    for (int i = 0; i <= pocetak; i++)
        printf("%d", i);
    printf("\n\n");
    if (pocetak < n)
        rec(pocetak + 1, n);
}

int main()
{
	long long broj;
    int decBroj;

	printf("Unesite binarno koliko brojeva zelite: ");
	scanf("%lld", &broj);

    decBroj = convert(broj);

    printf("%d\n\n", decBroj);

    rec(0, decBroj);

	return 0;
}