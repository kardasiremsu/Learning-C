#include<stdio.h>
/*

tek boyutlu için gönderme
int carp(int matris[],int size){
	
	int carpim=1;
	int i;
	for(i=0;i<size;i++){
		carpim *= matris[i];
	}
	return carpim;
}



int main(){
	
int sayilar[5] = {1,2,3,4,5};
printf("%d",carp(sayilar,5));	
	
	
	return 0;
}
*/

void bastir(int matrisimiz[][4],int size1){
int i,j;
for(i=0;i<size1;i++){
		for(j=0;j<4;j++){
		printf("%d ",matrisimiz[i][j]);
		}	
		printf("\n");
	}
}


int main(){

int matris[3][4];
printf("Matrisi doldurunuz");
int i, j;

for(i=0;i<3;i++){
	for(j=0;j<4;j++){
		scanf("%d",&matris[i][j]);
	}
}
bastir(matris,3);
return 0;
}

