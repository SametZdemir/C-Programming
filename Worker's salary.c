#include<stdio.h>
int main(){
	
	int sayac=0;
	int matris[50][50];
	int i,j,fabrika,isci;
	printf("Fabrrika sayisi girin:"); scanf("%d",&fabrika);
	printf("Isci sayisini girin : "); scanf("%d",&isci);
	for(i=0;i<fabrika;i++){
		for(j=0;j<isci;j++){
			printf("%d. fabrikanin %d. iscisinin maasi :",i+1,j+1);scanf("%d",&matris[i][j]);
			if(matris[i][j]<1000)
			{
				matris[i][j]+=(matris[i][j]/100)*10;
				sayac++;
			}
		}
	}
			for(i=0;i<fabrika;i++){
		for(j=0;j<isci;j++){
			printf("Maaslar= %d TL\n",matris[i][j]);
		}
	}
		printf("1000 tl nin altindaki isci sayisi = %d",sayac);	
		
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
	
}
