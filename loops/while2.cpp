#include<stdio.h>

int main()
{
	int sayi;
	int fact =1;
	printf("Faktoriyeli alinmasini istediginiz sayi:");
	scanf("%d", &sayi);
	
	while( sayi != 0){
		printf("%d\n",sayi);
		fact = fact * sayi;
		sayi--;

	}
	printf("\n%d",fact);
}
