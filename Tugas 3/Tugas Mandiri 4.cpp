#include <stdio.h>

int main()
{
	int bilangan;
	printf("Masukkan bilangan bulat positif: ");
	scanf("%d", &bilangan);
	
	if (bilangan < 0) {
		printf("silahkan masukkan bilangan bulat positif.\n");
	 }else{
	 	if(bilangan % 2 == 0) {
	 		printf("Keterangan: GENAP\n");
		 }
		 else{
		 	printf("Keterangan: GANJIL\n");
		 }
	 }
	 return 0;
	
}
