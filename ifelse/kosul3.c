#include<stdio.h>
int main(){
	int vize1,vize2,final;
	float dersort;
	float ortalama;
	
	printf("1.vize notunuzu girin:");
	scanf("%d",&vize1);
	
	printf("2.vize notunuzu girin:");
	scanf("%d",&vize2);
	
	printf("Final notunuzu girin:");
	scanf("%d",&final);
	
	printf("Üniversite derecenizi girin.");
	scanf("%d",ortalama);
	
	dersort = (vize1 + vize2 + final)/3.0;
	printf("%.1f",dersort);
	
	
	if(dersort >60) {
		
		printf("Dersten gectiniz.");
		
		}	
	else if (dersort >50){
		
		printf("Dersten bute kaldiniz.");
		
		if (ortalama <2,5) {
			printf("Bütü geçsen de al seneye al,ortun düþük");
			
		}
		
	
	}


	else {
		printf("Kaldiniz.");
	}
	
	return 0;
}
