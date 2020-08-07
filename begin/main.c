#include<stdio.h>

//bir karaktere bas�nca bitmesi i�in include<conio.h> getch(); kullan
int main() {
	printf("Merhaba Yazilimci\t Merhaba \n");
	printf("C Programlamaya Hosgeldiniz");


	int a1= 42;
	char b1 = 66;
	char b2= 'B';
	float c1= 4.2;
	double d1 = 0.21;
	printf("%d %c %d %.1f %.2f %s\n", a1,b1,b2, c1,d1,"Yazilim Bilimi");

	
	printf("%d byte\n", sizeof(char));
	printf("%d byte\n", sizeof(int));
	printf("%d byte\n", sizeof(short int));
	printf("%d byte\n", sizeof(long int));
	printf("%d byte\n", sizeof(float));
	printf("%d byte\n", sizeof(double));


//Tek yorum sat�r� compiler(derleyici) g�rmez

/* �oklu yorum sat�r�
g�rmezden gelir */

/* De�i�kenler
char, int,float,double,short,long
c      d    f      lf    

char 1 byte(8bit) 0 dan 255(2^8) e kadar de�er al�yor.ASCII Tablosundaki bir de�ere e�de�erdir
int 4 byte (32bit)  -2^16 dan 2^16 ya kadar de�er al�yor. 30,60 falan(tam say�)
short 2 byte(16 bit) -2^8 den 2^8 e. int ile ayn�.
long 8 byte(64bit) -2^32 den 2^32 ye al�yor. int ile ayn� cok b�y�k say�lar.
float kesirli say�. byte i�letim sistemine g�re de�i�ir
double 2,164654891651 gibi �ok uzun ondal�kl� say�lar. bytei de�i�ebilir
*/
/* de�i�ken tan�mlama
veritipi degiskenadi; */

/* Format Belirleyiciler:
%d ---> int  degerler
int x = 5;
printf( "%d",x); ---> ekrana 5 gelir

%f ---> float double  degerler
float f = 3.1;
double d = 4,21;
printf("%f &f", f,d); --> 3.1 4.21

%c ---> karakterler i�in
char c1 = "c"
printf("%c",c1); ---> c basar
printf("%d",c1); ---> ekrana ASCII tablosundaki c yi basar.

%s ---> karakterdizileri i�in ("Cprogramlama")
printf("%s","Cprogramlama"); ---> ekrana Cprogramlama yazar.
*/


	return 0;
}
