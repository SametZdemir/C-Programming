#include<stdio.h>
int main()
{
	int j,sayi;
	int i,sayac=0;
	jump:
	for(i=0;i<5;i++){
		printf("Sayi gir: ");scanf("%d",&sayi);
		for(j=1;j<sayi;j++){
			if(sayi%j==0){
			sayac++;
			}
		}
		if(sayac>1)
		printf("Sayi asal degildir.\n");
		else 
		printf("Sayi asaldir.\n");
		sayac=0;
	}
	goto jump;
	
	return 0;
}
