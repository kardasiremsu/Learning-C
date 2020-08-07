#include<stdio.h>
void degerdegistir(int *a, int *b){
	int gecici = *a; //a nýn kutucuðunun degeri yani 5 atanýr
	*a = *b; //anýný kutucaða bnin kutucuðu atanýr (10 yani x)
	*b = gecici; // bnin kutucuðu 5 oldu(yani y)
	printf("*a:%u *b:%u",*a,*b);
}
//videoyu izle

int main(){
	int x=5, y=10; // x in baslangýcý 100 olsun y nin 200
	degerdegistir(&x,&y); // 100(xin adresi) a ya atanýr, 200 de b ye yani a pointeri x i iþaret ediyor b de y yi;
	printf("x:%d y:%d",x,y);
	return 0;
}
