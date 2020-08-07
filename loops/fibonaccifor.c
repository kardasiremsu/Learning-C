#include<stdio.h>

int main(){
	
	int ilksayi=1, ikincisayi=1;
	int i,temp;
	printf("%d\n%d\n",ilksayi,ikincisayi);
	for(i=0;i<10;i++){
	
	
	
	temp = ikincisayi;
	ikincisayi = ilksayi + ikincisayi;
	ilksayi= temp;
	printf("%d\n",ikincisayi); 
}
	
	return 0;
}
