#include<stdio.h>
int main(){
	
	int i,j =1;
	int *jp1, *jp2 = &j; //jp2 j nin baslang�c�n� g�steriyor
	jp1 = jp2; //jp1 de j nin baslang�c�n� g�steriyor
	
	i = ++(*jp2); //(*jp2) kutucu�unun de�erini al�p 1 arttr�yor yani jp2 art�k 2 oluyor, i =2 oluyor 
	
	*jp2  = *jp1 + i; (jp1 art�k 2 oldu�u i�in i de 2 toplam jp2 4 oluyor)
	//jp1 de jp2 ile ayn� yeri vg�sterdi�i i�in 4 oluyor
	printf("i = %d, j= %d , *jp1 = %d, *jp2 = %d",i,j,*jp1,*jp2);
	//adam kutuyla anlatm�s tekrar izle anlamazsan
	
	return 0;
}
