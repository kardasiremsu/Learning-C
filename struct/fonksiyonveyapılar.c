#include<stdio.h>
struct ogrenci{
	char isim[20];
	char soyisim[20];
	int numara;
}; 	

void goster(struct ogrenci birinciogrenci){
	printf("Ogrencinin bilgileri : %s %s %d",birinciogrenci.isim, birinciogrenci.soyisim, birinciogrenci.numara);
}

int main(){

struct ogrenci ogrenci1 = {"Iremsu","Kardas",969};

goster(ogrenci1);

return 0;
}
