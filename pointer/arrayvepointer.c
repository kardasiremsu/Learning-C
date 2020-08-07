#include<stdio.h>

int main(){
	int sayilar[5] = {1,2,3,4,5};
	int *p =sayilar; // =&sayilar[0]
	
	printf("%u\n",p);	
	printf("%u\n",p+1);	
	printf("%u\n",p+2);	
	printf("%u\n",p+3);	
	printf("%u\n",p+4);	
	
	printf("%u\n",*p); // *p =p[0]
	printf("%d\n",*(p+1)); //*(p+1) = p[1]
	printf("%d\n",*(p+2)); //*(p+2) = p[2]
	printf("%d\n",*(p+3)); //*(p+3) = p[3]
	printf("%d\n",*(p+4)); //*(p+4) = p[4]
	return 0;
}
