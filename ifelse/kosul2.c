#include<stdio.h>
/* Bool veritipi(true ya da false)

mant�ksal ifadeler  do�ru ise true
					yanl�� ise false
ayn� zamanda 0 olmayan t�m say�lar true dur. (0 false)

if(1500) {     }
--> truedur

Mant�ksal Operat�rler

< ----> k���k m�d�r 
> ----> b�y�k
<= ---> k���k ya da e�it
>= ---> b�y�k ya da e�it
== ---> e�itmi
!= ---> e�it de�il mi


Mant�ksal ba�la�larr
&& --> "ve" ba�lac� true&&true&&false bu falsedur hepsi true olmal�
|| --> "ya da" (or) true || true || false sa true
! --> "de�ili" true olan� false false olan� true yapar
!true = false
�artl� c�mleler

a = x > y ? x:y;  (x >y ise x de�il se y )

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
