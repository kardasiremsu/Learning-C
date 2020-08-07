#include<stdio.h>

int asal_mi(int sayi){

int i;
for (i =2; i<sayi; i++)
{
	if (sayi%i ==0){
		return 0;
	}
}
return 1;
}
int main(){
	int sayi;
	printf("sayiyi giriniz");
	scanf("%d",&sayi);
	
	if(asal_mi(sayi)==0){
		printf("Sayi asal degildir");
	}
	else {
		printf("sayi asaldir");
	}
	
	return 0;
}

