#include <stdio.h>

int main()
{
	int celcius;
	float fahrenheit;
	float reamur;
	
	printf("Masukkan suhu dalam Celcius: ");
	scanf("%f", &celcius);
	
	fahrenheit = (celcius * 9/5) + 32;
	reamur = celcius * 4/5;
	
	printf("suhu dalamah fahrenheit: %.2f °F\n", fahrenheit);
	printf("suhu dalam reamur: %.2f °R\n", reamur);
	return 0;
}


