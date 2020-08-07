#include<stdio.h>

int main(){
	FILE *filep;
	char text[256];
	filep = fopen("yaz.txt","a"); //ilkte yoksa oluþturur, ikinciye calsýtýrrýrsan ekler
	
	if(filep==NULL){
		printf("Dosya olusturulamadi.");
	}
	else{
		printf("Bir sey yaz:");
		fgets(text,256,stdin); //hangi veriye, max kaç karakter, standart input (bosluksuz alýr güvenilir)
		fputs(text,filep); //hangi veriiy hangi dosyaya
		printf("Dosyaya yazildi.");
		}
	
	fclose(filep);
	return 0;
}
