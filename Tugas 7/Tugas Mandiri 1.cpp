#include <stdio.h>
int main ()
{
	int nilai[10];
	int i;
	
	printf("Input 10 nilai mahasiswa:\n");
	for(i=0; i<10; i++){
		printf("Nilai mahasiswa ke-%d: ", i+1);
		scanf("%d", &nilai[i]);
	}
	printf("\nNilai Mahasiswa Yang Lulus (nilai>=60):\n");
	for(i=0; i<10; i++) {
		if (nilai[i]>=60){
			printf("Mahasiswa ke=%d: %d\n", i + 1, nilai[i]);
		}
		
	}
	return 0;
}
