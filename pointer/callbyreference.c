#include<stdio.h>
void degerdegistir(int *a, int *b){
	int gecici = *a; //a n�n kutucu�unun degeri yani 5 atan�r
	*a = *b; //an�n� kutuca�a bnin kutucu�u atan�r (10 yani x)
	*b = gecici; // bnin kutucu�u 5 oldu(yani y)
	printf("*a:%u *b:%u",*a,*b);
}
//videoyu izle

int main(){
	int x=5, y=10; // x in baslang�c� 100 olsun y nin 200
	degerdegistir(&x,&y); // 100(xin adresi) a ya atan�r, 200 de b ye yani a pointeri x i i�aret ediyor b de y yi;
	printf("x:%d y:%d",x,y);
	return 0;
}
