#include<stdio.h>

int faktoriyel (int sayi){
int fact=1;
for (; sayi>0; sayi--){
fact *=sayi;
}
return fact;
}

int main()
{
	int sayi;
	printf("Faktoriyeli alinacak sayiyi girin:");
	scanf("%d",&sayi);

	printf("faktoriyel: %d",faktoriyel(sayi));
	return 0;
}
