#include <stdio.h>
#include <math.h>

int main ()
{
	float a,b,c;
	printf("MENCARI SISI MIRING SEGITIGA");
	printf("Sisi alas = ");
	scanf("%f",&a);
	printf("Sisi tinggi = ");
	scanf("%f",&b);
	c=a*a+b*b;
	printf("jadi sisi miring segitiga adalah %2.f",sqrt(c));
	
	return 0;
 } 
