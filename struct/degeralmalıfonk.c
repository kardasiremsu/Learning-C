#include<stdio.h>
struct ogrenci{
	char isim[20];
	char soyisim[20];
	int numara;
}; 	

void goster(struct ogrenci birinciogrenci){
	printf("Ogrencinin bilgileri : %s %s %d",birinciogrenci.isim, birinciogrenci.soyisim, birinciogrenci.numara);
}

struct ogrenci degerAl() {
	struct ogrenci yeni;
	printf("Bilgilerini girin:");
	scanf("%s %s %d", yeni.isim, yeni.soyisim, &yeni.numara);
	return yeni;
};

int main(){

struct ogrenci ogrenci1 = degerAl();

goster(ogrenci1);

return 0;
}
