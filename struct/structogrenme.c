#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef enum{
	bay, //0
	bayan //1
}cinsiyet;


typedef enum{
	pzt, //0
	sali, //1
	crs, //2
	prs, //3
	cuma,
	ctesi,
	pazar
}gunler;

// aslýnda arraye deðer atamak gibi

typedef struct{
	int yas;
	char *isim;
	char soyisim[20];
	cinsiyet c;
	gunler tatilgunu;
}insan;

char *emeklimi (insan *birey){ //callbyreference
	fflush(stdout);
	perror("\ngecti");
	if(birey->c == bay && birey->yas >55)
		return "Emekli";
	if(birey->c == bayan && birey->yas>50)
		return "Emekli";
	return "Emekli degil";
}

int main(){
	insan ali;
	insan *veli;
	veli = (insan*) malloc(sizeof(insan));
	veli->yas = 60;
	veli ->c = bay;
	ali.yas = 18;
	ali.c = bay;
	ali.tatilgunu = cuma;
	printf("Alinin yasi: %d alinin cinsiyeti: %u, alinin tatil gunu : %u ",ali.yas,ali.c,ali.tatilgunu);
	printf("\n\nVelinin yasi :  %d", veli->yas);
	
	printf("\n\nAli emekli mi? %s",emeklimi(&ali));
	printf("\n\nVeli emekli mi? %s",emeklimi(veli));
	
	free(veli);
	return 0;
	
	
}
