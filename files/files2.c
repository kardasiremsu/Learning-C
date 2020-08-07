#include<stdio.h>
#include<string.h>

int main(){
	
	/*
	fopen("dosyaadi","mod")
	
	fclose(filep); kapatmak için kullanýlmalý ram için
	
	fputc(character, filep) characteri alýp filep gösterdiði dosyaya yazýyor	
	
	*/
	char veri[25] = "Yazilim Bilimi";
	int uzunluk = strlen(veri);
	int i;
	
	FILE *filep = fopen("ikincidosya.txt","w");
	
	if(filep == NULL) {
		printf("DOSYA OLUSTURULAMADI\n");
	}
	else{
		for(i=0; i <uzunluk; i++){
			fputc(veri[i],filep);
			printf("Yazilan karakter %c\n", veri[i]);
		}
		printf("DOSYA BASARIYLA YAZDIRILDI\n");
		fclose(filep);
		
	}
		
	return 0;
}
