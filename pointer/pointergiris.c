 	#include<stdio.h>
int main(){

int i=5;
int *p = &i;
printf("%u\n",p);
printf("%p\n",p);
printf("%d\n",*p);

// & de�ikenin adres bilgisini verir.
// * adresteki de�eri verir.
return 0;
}
