#include<stdio.h>
 
int main(){
	int toplam;
	int i=0;
	while(i<=10{
		i++;
		//i++ altta olsa sonsuz döngü oluyor
		if(i%2==1) {
			continue;
		}
		toplam +=i;
		
	}
	printf("%d",toplam);
	return 0;
}
