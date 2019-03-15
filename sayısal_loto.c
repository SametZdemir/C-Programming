#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void sayisal_loto(int x){
	srand(time(NULL));
	
	int i;
	for(i=1;i<=x;i++){
		printf("%d.numara:%d",i,1+rand()%100);
		
		printf("\n");
	}
	
}
int main()
{
	int x;
	printf("Katilan kisi sayisi:");
	scanf("%d",&x);
	sayisal_loto(x);
	
	
	
	
	return 0;
}
