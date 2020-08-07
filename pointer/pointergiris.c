 	#include<stdio.h>
int main(){

int i=5;
int *p = &i;
printf("%u\n",p);
printf("%p\n",p);
printf("%d\n",*p);

// & değikenin adres bilgisini verir.
// * adresteki değeri verir.
return 0;
}
