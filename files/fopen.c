#include<stdio.h>

int main(){
	
	//FILE *filep = fopen("dosya_adi","Mod");
	
	//w dosya yoksa o dosyay� olu�turur
	// ayn� adda dosya varsa o dosyay� siler bo� dosya olu�turur o nedenle tehlikeli dikkatli kullan
	
	//r readin k�saltmas� dosya varsa dosyay� okur yoksa bo� de�er al�r 
	
	//a append gibi olan dosyaya ekler var olan dosyay� dosyan�n i�indeki d�eerleri kaybetmeden de�i�tirmeyi sa�l�yor
	
	//w+ hem yazma hem okuma izni
	
	//r+ hem yazma hem okuma izni
	
	//a+ hem yazma hem okuma izni
	
	//bir �ok mod var asl�nda intten bakabilirsin
	
	FILE *filep = fopen("yazilimbilimi.txt","w");
	
	if(filep == NULL) {
		printf("DOSYA OLUSTURULAMADI\n");
	}
	else
		printf("DOSYA OLUSTURULDU\n");
	
	
	FILE *filep2 = fopen("yazilimbilimi.txt","r");
	
	if(filep2 == NULL) {
		printf("oyle bir dosya yok\n");
	}
	else
		printf("DOSYA VAR\n");
	return 0;
	
	fclose(filep);
	return 0;
}
