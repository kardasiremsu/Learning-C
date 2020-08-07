#include<stdio.h>
#include<math.h>
int main(){
	/* aritmetik ortalama int a,b,c,d,e;
	float aritmetik;
	
	printf("5 sayi giriniz:");
	
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	//entere basa basa girsin diye 
	aritmetik = (a+b+c+d+e)/5.0;
	printf("Girdiginiz sayilarin aritmetik ortalamasi %.2f'dir.",aritmetik);
	*/
	
	//ax^2+bx+c þeklindeki denklemin formülü
	int a,b,c;
	float x1,x2;
	float delta; 
	printf("Denklemin a'sini giriniz:");
	scanf("%d",&a);
	printf("Denklemin b'sini giriniz:");
	scanf("%d",&b);
	printf("Denklemin c'sini giriniz:");
	scanf("%d",&c);
	delta = b*b - 4*a*c;
	x1 = (-b + (sqrt(delta)))/2*a;
	x2 = (-b - (sqrt(delta)))/2*a;
	printf("Denklemin 1.koku %.2f, ikinci koku %.2f'dir",x1,x2);
	
	return 0;
}
