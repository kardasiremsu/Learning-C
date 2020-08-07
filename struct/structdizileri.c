#include<stdio.h>
struct ogrenci{
	char isim[20];
	char soyisim[20];
	int numara;
	int yas; 
};

int main(){

struct ogrenci ogrenciler[3];
for(int i=0; i<3;i++){
	printf("%d nci ogrencinin bilgileri:", i+1);
	scanf("%s %s %d %d",ogrenciler[i].isim, ogrenciler[i].soyisim,&ogrenciler[i].numara,&ogrenciler[i].yas);
}

for(int i=0; i<3;i++){
	printf("%d nci ogrencinin bilgileri: %s %s %d %d\n\n", i+1,ogrenciler[i].isim, ogrenciler[i].soyisim,ogrenciler[i].numara, ogrenciler[i].yas);
}
return 0;
}
