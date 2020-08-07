#include<stdio.h>
#include<string.h>
void terscevir(char metin[]){
	int i,uzunluk,gecici;
	uzunluk=strlen(metin);
	for(i=0;i<uzunluk/2;i++){
		gecici=metin[i];
		metin[i]=metin[uzunluk-1-i];
		metin[uzunluk-1-i] = gecici;		
	}
	
}
int main()
{

char text[200];
scanf("%s",text);
terscevir(text);
printf("%s",text);
return 0;
}
