#include<stdio.h>

int main(){
	/* 
	T�P D�N���MLER�
	3.2/2 kendili�inden b�l�n�r ��nk� 2 floata 2.0 cevirilir.
	
	otomatik d�n���m �izelgesi
	char
	short --> int --> float --> double --> long double
	
	kendimiz �evirmek i�in 3.2 yi int mesela --> (int) 3.2 --> 3 */
	
	int x =3;
	float y= 0.1;
	printf("%f\n",x/y);
	//otomaitk d�n��t�
	
	printf("%f\n",(float)x);
	printf("%d\n",(int)y);
	
	
	
	
	
	return 0;
}
