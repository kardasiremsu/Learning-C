#include<stdio.h>
#include<string.h>
struct ogrenci{
	char isim[20];
	char soyisim[20];
	int numara;
	
};
/*
struct ogrenci *degerDegistir (struct ogrenci *p){
	strcpy(p->isim,"Cagýn");
	strcpy(p->soyisim,"Okuyucu");
	p->numara = 696;
	
	return p;
}


main de

struct ogrenci *tut;
tut = degerDegistir(&ogrenci1); gerekecekti 
*/

void degerDegistir(struct ogrenci *p){
	strcpy(p->isim,"Cagin");
	strcpy(p->soyisim,"Okuyucu");
	p->numara = 696;
	
}

void goster(struct ogrenci *p){
	
	printf("		Ogrencinin Bilgileri\nIsim:%s\nSoyisim:%s\nNumara:%d\n",p->isim,p->soyisim,p->numara);
}

int main(){
	struct ogrenci ogrenci1 = { "Iremsu", "Kardas", 267};
	goster(&ogrenci1);
	degerDegistir(&ogrenci1);
	goster(&ogrenci1);
	return 0;
}
