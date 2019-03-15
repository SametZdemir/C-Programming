	#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void zar_at()
{
	int toplam=0;
	int i;
	srand(time(NULL));
	for(i=0;i<4;i++){
		
		
		toplam=(1+rand()%6)+toplam;
		printf("toplam=%d",toplam);
		printf("\n");
		
	}
	
	printf("4 zarýn toplamý:%d",toplam);
	
	
}
void satiratla()
{
	printf("\n");
}

int arti(int a,int b)
{
	int sum=0;
	sum=a+b;
	return sum;
}
int main(){
	zar_at();
	satiratla();
	int x;
	int y;
	int toplam=0;
	
	printf("Sayi giriniz:");
	satiratla();
	scanf("%d%d",&x,&y);
	toplam=arti(x,y);
	printf("Sayilarin toplami:%d",toplam);
	
	return 0;
}
