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
	
	printf("%s\n",p); //baslang�ctan p ye olan� yazd�r�r
	printf("%s\n",p+2);//p[2] den itibaren yazd�r�r 
	printf("Ka� harf oldu�unu ��renmek istedi�iniz metni giriniz:");
	char metin[] = "";	
	
	scanf("%s",metin);
	
	printf("%d",benimstrlen(metin));
	return 0;
}
