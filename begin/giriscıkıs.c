#include<stdio.h>
#define PI 3.14
/* scanf("%f,&x); &i�areti xe kullan�cadan gelen de�eri atar*/

int main(){
	
	int yaricap;
	float hacim;
	printf("Kurenin yaricapini giriniz:");
	scanf("%d",&yaricap);
	hacim = (4/3.0)*PI*(yaricap*yaricap*yaricap);
	printf("Kurenin hacmi %.2f 'dir",hacim);
	
	
	return 0;
}
