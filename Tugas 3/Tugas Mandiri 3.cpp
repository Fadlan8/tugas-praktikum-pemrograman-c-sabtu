#include <stdio.h>
#include <math.h>

int main()
{
	float alas;
	float tinggi;
	float miring;
	
	printf("PROGRAM MENGHITUNG SISI MIRING SEGITIGA\n\n");
	printf("Input alas (dalam cm) : ");
	scanf("%f", &alas);
	printf("Input tinggi (dalam cm) : ");
	scanf("%f", &tinggi);
	
	miring = sqrt((alas / 2) * (alas / 2) + tinggi * tinggi);
	
	printf("sisi miring segitiga: %.3f cm\n", miring);
	return 0;
}
