#include<stdio.h>

int main(){
	
	//FILE *filep = fopen("dosya_adi","Mod");
	
	//w dosya yoksa o dosyayý oluþturur
	// ayný adda dosya varsa o dosyayý siler boþ dosya oluþturur o nedenle tehlikeli dikkatli kullan
	
	//r readin kýsaltmasý dosya varsa dosyayý okur yoksa boþ deðer alýr 
	
	//a append gibi olan dosyaya ekler var olan dosyayý dosyanýn içindeki dðeerleri kaybetmeden deðiþtirmeyi saðlýyor
	
	//w+ hem yazma hem okuma izni
	
	//r+ hem yazma hem okuma izni
	
	//a+ hem yazma hem okuma izni
	
	//bir çok mod var aslýnda intten bakabilirsin
	
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
