#include<stdio.h>

int main(){
	FILE *filep;
	char text[256];
	filep = fopen("yaz.txt","a"); //ilkte yoksa olu�turur, ikinciye cals�t�rr�rsan ekler
	
	if(filep==NULL){
		printf("Dosya olusturulamadi.");
	}
	else{
		printf("Bir sey yaz:");
		fgets(text,256,stdin); //hangi veriye, max ka� karakter, standart input (bosluksuz al�r g�venilir)
		fputs(text,filep); //hangi veriiy hangi dosyaya
		printf("Dosyaya yazildi.");
		}
	
	fclose(filep);
	return 0;
}
