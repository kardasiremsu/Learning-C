#include<stdio.h>
int main(){

/* 
degisken(variable) = ifade(expression)
int x = 15;
int y = 14;

x = y;
y = x;
�rnek
int x = 6;
int y = 7;
x = y; ( y'nin de�eri x'e atan�yor. x = 7, y = 7)
y = x+1; ( x+1 hesaplan�yor(8) y'ye atan�yor y=8, x=7 sa�dan ba�land�)


artt�rma,azaltma

i = i+1;
Bu ayn� zamanda i +=1

postfix: i++;
prefix: ++i;
�rnek:
int i =4;
printf("%d", i++); --> 4
printf("%d", ++i); --> 4

i = i *(a+1); e�iti --> i*= a+1;

i = j = k = 0;
sa�dan ba�layarak atar
k =0
j = k  j=0
i = j i =0 */

int x =5;
int y =7;
int a =2;

x =y;
y = x+a+1;
printf("x:%d\ny:%d\na:%d\n",x,y,a);


x=4;
y=5;
a =6;
printf("x:%d y:%d a%d \n",--x,++y,a++);
//x azalt�ld� y artt�r�ld� a bir sonrakinde artt�r�lacak
printf("x:%d y:%d a%d \n",x,y,a);
// a artt�r�ld�

/* �uan da x=3 a7
x = x + (a+1) */

x += a+1;
printf("%d\n",x);


return 0;
}
