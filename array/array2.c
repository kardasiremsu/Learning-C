#include<stdio.h>
int main(){
	int sayilar[5];
	int i;
 	double toplam=0.0;
	for(i=0;i<5;i++){
		printf("Sayi giriniz.");
		scanf("%d",&sayilar[i]);
		toplam += sayilar[i];
	}
	printf("%lf",toplam);
	return 0;
}
