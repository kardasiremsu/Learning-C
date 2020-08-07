#include<stdio.h>

int main(){
	/* 
	TÝP DÖNÜÞÜMLERÝ
	3.2/2 kendiliðinden bölünür çünkü 2 floata 2.0 cevirilir.
	
	otomatik dönüþüm çizelgesi
	char
	short --> int --> float --> double --> long double
	
	kendimiz çevirmek için 3.2 yi int mesela --> (int) 3.2 --> 3 */
	
	int x =3;
	float y= 0.1;
	printf("%f\n",x/y);
	//otomaitk dönüþtü
	
	printf("%f\n",(float)x);
	printf("%d\n",(int)y);
	
	
	
	
	
	return 0;
}
