#include<stdio.h>

int topla(int sayi1, int sayi2)  {
	
	return(sayi1 + sayi2);
}
//geriye toplam� g�nderece�i i�in

/*geriye toplam g�ndermeseydi void hatayibas(int hata)
{ 
printf("Hata kodu %d", hata); 
}
*/


int main() {
	
	int sayi1, sayi2;
	printf("toplanilacaklari girin:");
	scanf("%d %d", &sayi1, &sayi2);
	
	
	int toplam = topla(sayi1,sayi2);
	printf("toplam %d",toplam);
	
	
	
	
	return 0;
}
