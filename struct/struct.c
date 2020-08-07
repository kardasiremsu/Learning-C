#include<stdio.h>
#include<string.h>
/* struct etiketadý{

	deðiþkentipi deðiþken1
	deðiþkentipi deðiþken2
	deðiþkentipi deðiþken3
	..
	..
	..
	}; */
	
struct Adress{
	char mahalle[20];
	char cadde[20];
	char sokak[20];
	
}; //}adres1,adress2; gibi ibþey yapabilirisn bu da sonra tanýmlayacaðým demektir

struct ogrenci{
	char isim[20];
	char soyisim[20];
	int numara;
	int yas;
	struct Adress adres; //iç içe struct
};

int main(){
	/*
	struct ogrenci ogrenci1 = {"Iremsu","Kardas", 969, 20};
	içiçe olmasa böyle kullanabilirsin
	*/
	
	struct ogrenci ogrenci1;
	strcpy(ogrenci1.isim,"Iremsu");
	strcpy(ogrenci1.soyisim,"Kardas");
	ogrenci1.numara = 969;
	ogrenci1.yas = 20;
	strcpy(ogrenci1.adres.mahalle,"Barbaros");
	strcpy(ogrenci1.adres.cadde,"Troya cad");
	strcpy(ogrenci1.adres.sokak,"Harmanlik sok");
	
	printf("%s %s %d %d %s %s %s",ogrenci1.isim,ogrenci1.soyisim,ogrenci1.numara,ogrenci1.yas,ogrenci1.adres.mahalle,ogrenci1.adres.cadde,ogrenci1.adres.sokak);

	
	// str copy string.h kütüpte
	
	
	return 0;
}
