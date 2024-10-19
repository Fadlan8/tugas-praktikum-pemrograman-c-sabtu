#include <stdio.h>
int main()
{
	int N;
	printf("Masukkan Bilangan: ");
	scanf("%d", &N);
	
	if(N>50){
		N-=25;
	}
		N+=10;
	printf("%d\n",N);
	return 0;
}
