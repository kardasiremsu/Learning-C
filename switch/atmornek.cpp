#include<stdio.h>

int main() 
{
		int islem;
		int bakiye=1000;
		int tutar;
		
		printf("�slem seciniz\n1)Para cekme\n2)Para yat�rma\n3)Kart iade\n");
		scanf("%d",&islem);
		
		switch(islem) {
			
			case 1:
				printf("Cekilecek tutar� giriniz.");
				scanf("%d",&tutar);
				if (tutar>bakiye)
				{
				printf("Bakiyeniz yetersiz"); 
				}
				else{
				bakiye = bakiye-tutar;
				printf("Bakiyeniz %d", bakiye); 
				}
				break;
			case 2:
				printf("Yat�r�lacak tutar� giriniz.");
				scanf("%d",&tutar);
				
				bakiye = bakiye+tutar;
				printf("Bakiyeniz %d", bakiye);
				break;
			case 3:
				printf("Kart�n�z iade edildi.");
				break;
			
	}
	
	return 0;
}
