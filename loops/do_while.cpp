#include<stdio.h>

int main(){
	
	int sayi,toplam,hane=0;
	printf("sayiyi giriniz:");
	scanf("%d",&sayi);
	
	do{
		toplam = toplam + (sayi%10);
		hane++;
		sayi = sayi/10;
		
	}
	
	while (sayi >0);
	printf("Sayinin bas toplamý %d dýr ve %d hanelidir",toplam, hane);
}
