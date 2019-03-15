#include<stdio.h>
int main()
{
int i;
int dizi[10];
int EB,EK;
for(i=0;i<10;i++){
	printf("%d.sayiyi girin:",i+1);
	scanf("%d",&dizi[i]);

}
	EB=EK=dizi[0];
for(i=0;i<10;i++){

	if(dizi[i]<EK)
	EK=dizi[i];
	if(dizi[i]>EB)
	EB=dizi[i];
}
	printf("En buyuk:%d",EB);
	printf("En kucuk:%d",EK);
return 0;

}
