#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
/* rand--> tek bi sayý atar
	srand(2) ==> 2. sayýyý atar (RAND VE SRAND STDLÝBE BAÐLI)
	srand(time(NULL)); --> her seferinde baska bi sayý atar. */

/*	int a;
	srand(time(NULL));
	a=rand();
	printf("%d",a);
	return 0;*/
int toplam=0,i,sayi;
float ortalama;
for(i=1;i<=10;i++){
	sayi=rand()%100+10; //10 ile 110 arasýndaký sayýlar
	printf("%d\t",sayi);
	toplam+=sayi;
}
ortalama= toplam/10.0;
printf("%.2f",ortalama);

}
