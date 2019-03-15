#include<stdio.h>
void ilkyildiz()
{
	int i,j,giris;
	printf("Sayi gir:"); 	scanf("%d",&giris);
	for(i=1;i<=giris;i++){
		for(j=0;j<i;j++){
				printf("*");	}
		printf("\n");	}	}
void boslukyildiz(){
	int i,k,j,giris;
printf("Gir:"); scanf("%d",&giris);
int bosluk=giris-1;
for(i=1;i<=giris;i++){	
	for(k=0;k<bosluk;k++){
		printf(" ");	}
	for(j=0;j<i;j++){
		printf("*");	}
	printf("\n");
	bosluk=bosluk-1;}	}
void ortayildiz(){
		int i,k,j,giris;
printf("Gir:"); scanf("%d",&giris);
int bosluk=giris-1;
int yildiz=1;
for(i=1;i<giris;i++){
	for(k=0;k<bosluk;k++){
		printf(" ");
	}
	for(j=0;j<yildiz;j++){
		printf("*");
	}
	bosluk=bosluk-1;
	yildiz=yildiz+2;
	printf("\n");	
}}
int main(){
	ilkyildiz();	boslukyildiz(); 	ortayildiz();
return 0;	
}
