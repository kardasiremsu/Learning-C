#include<stdio.h>

int main() 
{
		int islem;
		int bakiye=1000;
		int tutar;
		
		printf("İslem seciniz\n1)Para cekme\n2)Para yatırma\n3)Kart iade\n");
		scanf("%d",&islem);
		
		switch(islem) {
			
			case 1:
				printf("Cekilecek tutarı giriniz.");
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
				printf("Yatırılacak tutarı giriniz.");
				scanf("%d",&tutar);
				
				bakiye = bakiye+tutar;
				printf("Bakiyeniz %d", bakiye);
				break;
			case 3:
				printf("Kartınız iade edildi.");
				break;
			
	}
	
	return 0;
}
