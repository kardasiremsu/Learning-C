#include<stdio.h>
/* Bool veritipi(true ya da false)

mantýksal ifadeler  doðru ise true
					yanlýþ ise false
ayný zamanda 0 olmayan tüm sayýlar true dur. (0 false)

if(1500) {     }
--> truedur

Mantýksal Operatörler

< ----> küçük müdür 
> ----> büyük
<= ---> küçük ya da eþit
>= ---> büyük ya da eþit
== ---> eþitmi
!= ---> eþit deðil mi


Mantýksal baðlaçlarr
&& --> "ve" baðlacý true&&true&&false bu falsedur hepsi true olmalý
|| --> "ya da" (or) true || true || false sa true
! --> "deðili" true olaný false false olaný true yapar
!true = false
þartlý cümleler

a = x > y ? x:y;  (x >y ise x deðil se y )

*/

int main () {

	/*
	int a=40;
	int b=50;
	int c=60;
	int d=70;
	F    &&		T  &&  (F || T)= T  === F
	a> c && c <= d && (a>b || b <c )
	
	!(a >= d )
	
	*/
	
	int a,b = 20, c =30;
	a = b <c ? b: c;
	printf("%s %d","Anin degeri:",a);
	return 0;
}
