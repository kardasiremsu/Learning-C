#include<stdio.h>
int main(){
	
	int i,j =1;
	int *jp1, *jp2 = &j; //jp2 j nin baslangýcýný gösteriyor
	jp1 = jp2; //jp1 de j nin baslangýcýný gösteriyor
	
	i = ++(*jp2); //(*jp2) kutucuðunun deðerini alýp 1 arttrýyor yani jp2 artýk 2 oluyor, i =2 oluyor 
	
	*jp2  = *jp1 + i; (jp1 artýk 2 olduðu için i de 2 toplam jp2 4 oluyor)
	//jp1 de jp2 ile ayný yeri vgösterdiði için 4 oluyor
	printf("i = %d, j= %d , *jp1 = %d, *jp2 = %d",i,j,*jp1,*jp2);
	//adam kutuyla anlatmýs tekrar izle anlamazsan
	
	return 0;
}
