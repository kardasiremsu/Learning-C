#include<stdio.h>
void degerdegistir(int a,int b){
	int gecici =a;
	a =b;
	b = gecici;
	printf("a:%d b:%d\n",a,b);
}

int main(){
int x=5,y=10;
degerdegistir(x,y);
printf("x:%d y:%d\n",x,y);
// x y nin deger ide�ismedi  c�nk� a ile b degerdegistir fonksiyonun i�inde kald� buna call by value denir.	
return 0;	
}
