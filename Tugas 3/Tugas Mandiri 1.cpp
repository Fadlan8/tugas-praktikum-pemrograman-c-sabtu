#include <stdio.h>
#include <math.h>

int main(){
	float alas;
	float tinggi;
	float luas;
	float keliling;
	float sisimiring;
	
	printf("PROGRAM MENGHITUNG KELILING DAN LUAS SEGITIGA\n\n");
	printf("Input alas (dalam cm) : ");
	scanf("%f", &alas);
	printf("Input tinggi (dalam cm) : ");
	scanf("%f", &tinggi);
	
	luas = 0.5 * alas * tinggi;
	
	sisimiring = sqrt((alas / 2) * (alas / 2) + tinggi * tinggi);
	keliling = alas + 2 * sisimiring;
	
	printf("luas segitiga: %.2f cm2\n", luas);
	printf("keliling segitiga: %.3f cm\n", keliling);
	return 0;
}
