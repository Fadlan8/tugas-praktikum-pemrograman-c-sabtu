#include <stdio.h>
int main()
{
	int N;
	printf("Masukkan Bilangan: ");
	scanf("%d", &N);
	
	if(N>50){
		N+=10;
	}else{
		N-=25;
	}
	printf("%d\n",N);
	return 0;
}
