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

int main()
{
    long long binarno;
    long heksa, binardeci, rezultat;
    printf("Unesite 16-bit binarni broj: ");
    scanf("%lld", &binarno);
    printf("Unesite 4-bit hexa broj: ");
    scanf("%x", &heksa);

    binardeci = convert(binarno);

    rezultat = binardeci - heksa;

    printf("Razlika je: %ld\n", rezultat);


	return 0;
}