#include<stdio.h>

void fonk(int matris[6][6]){
	int i;
	int j;
	for(i=0;i<6;i++){
		for(j=0;j<6;j++){
			matris[i][j]=0;
		}
	}
	
	
}

void fonk1(int matris[6][6]){
	int i;
	int j;
	for(i=0;i<6;i++){
		for(j=0;j<6;j++){
			matris[i][j]=255;
		}
	}
	
	
}
void fonk2(int matris[6][6]){
	int i;
	int j;
	int sayi;
	int x;
	for(i=0;i<6;i++){
		for(j=0;j<6;j++){
			printf(" Sayiyi giriniz:");scanf("%d",&sayi);
			x=255-sayi;
			matris[i][j]=x;
		}
	}
	
	
}
void fonk3(int matris[6][6]){
	int i;
	int j;
	int k,m;
	int dizi[6][6];
	for(i=0;i<6;i++){
		for(j=0;j<6;j++){
			for(k=5;k>=0;k--){
				for(m=5;m>=0;m--){
					dizi[i][j]=matris[i][j];
					matris[i][j]=matris[k][m];
				matris[k][m]=matris[i][j];
			}}
		}
	}
}
	
	



int main(){

int matris[6][6];
fonk(matris);
fonk1(matris);
fonk2(matris);

int i,j;
for(i=0;i<6;i++){
	for(j=0;j<6;j++){
		printf("%d  ",matris[i][j]);
	}
	printf("\n");
}

	
	return 0;
}















