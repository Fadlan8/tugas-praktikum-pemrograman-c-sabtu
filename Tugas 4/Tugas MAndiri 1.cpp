#include <stdio.h>
int main()
{
	int bilangan;
	printf("Masukkan bilangan bulat positif: ");
	scanf("%d", &bilangan);
	
	if (bilangan<0){
			printf("Silahkan Masukkan Bilangan Bulat Positif.\n");
	}else{
			if(bilangan % 2 ==0){
					printf("Keterangan : GENAP\n");
			}
			else{
					printf("Keterangan : GANJIL\n");
			}
	}
	return 0;
}
