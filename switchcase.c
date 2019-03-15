#include<stdio.h>
void satiratla(){
	printf("\n\n");
}

void bosluk(){
	printf("\t\t");
	
}
void durumlar()
{
	printf("1=Bakiye sorgulama.");
	bosluk();
	printf("2=Para çekme");
	satiratla();
	printf("3=Para yatirma");
	bosluk();
	printf("4=Cikis");
}
int main(){
	
	int islem,bakiye=1000,tutar;
	int i;
	durumlar();
	satiratla();
	x : printf("\nIslemi seciniz:"); scanf("%d",&islem);
	switch(islem)
	{
		case 1 :
			printf("Bakiyeniz=%d",bakiye);
			break;
		case 2:
			printf("Cekmek istediginiz tutari giriniz="); scanf("%d",&tutar);		
		bakiye=bakiye-tutar;
		printf("Kalan bakiye=%d",bakiye);
		break;
		case 3:
			printf("Yatirmak istediginiz tuatri giriniz:");  scanf("%d",&tutar);
			printf("Bakiyeniz=%d",bakiye+tutar);
			break;
		case 4:
		printf("Cikis yaptýnýz.")	;
		break;
		default:
			printf("Islem gecersiz...\a");			
		break;
	}
	if(islem!=4){
	goto x;	
}
	return 0;
}
