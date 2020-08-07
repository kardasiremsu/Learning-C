#include<stdio.h>
#include<stdbool.h>
int main(){
	int toplam=0;
	int i,sayi;
	
	for( i = 0 ; true ; i++){
		
		printf("Toplanilacak sayiyi giriniz(Çikmak için -1 yazin):");
		scanf("%d",&sayi);
		
		if(sayi== -1){
			break;
		
		}
		toplam += sayi;
		
		
		
	}
		printf("%d",toplam);
	return 0;
}
