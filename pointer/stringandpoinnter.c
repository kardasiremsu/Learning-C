#include<stdio.h>

int benimstrlen(char *yazi){
	int uzunluk = 0;
	int i;
	for(i=0; yazi[i] != '\0'; i++){
		uzunluk++;
	}
	return uzunluk;
}

int main(){
	
	
	char yazi[] = "tura";
	char *p = yazi;
	
	printf("%s\n",p); //baslangýctan p ye olaný yazdýrýr
	printf("%s\n",p+2);//p[2] den itibaren yazdýrýr 
	printf("Kaç harf olduðunu öðrenmek istediðiniz metni giriniz:");
	char metin[] = "";	
	
	scanf("%s",metin);
	
	printf("%d",benimstrlen(metin));
	return 0;
}
