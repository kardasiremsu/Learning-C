#include<stdio.h>
int main(){
	int a= 5,*ap;
	float b = 3.2,*bp;
	double c=3.415,*cp;
	char d= 'a', *dp;
	int sayilar[5] = {1,2,3,4,5};
	int *arrayp;
	int *arrayp2;
	//yerlerini ap yapıyoruz
	ap=  &a;
	bp = &b;
	cp= &c;
	dp=&d;
	arrayp= &sayilar[1];
	arrayp2 = &sayilar[2];
	printf("%u adresindeki intin degeri %d dir.\n",ap,*ap);
	printf("%u adresindeki floatın degeri %f dir.\n",bp,*bp);
	printf("%u adresindeki double degeri %lf dir.\n",cp,*cp);
	printf("%u adresindeki char degeri %c dir.\n",dp,*dp);
	printf("%u adresindeki 1. yerdeki arrayin degeri %d dir.\n",arrayp,*arrayp);
	printf("%u adresindeki 1. yerdeki arrayin degeri %d dir.\n",arrayp2,*arrayp2);

	return 0;
}
