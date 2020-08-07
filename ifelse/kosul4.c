#include<stdio.h>


int main(){
	int vize1,vize2,final;
	float ortalama,dersort;
	
	printf("1.vizenizi giriniz:");
	scanf("%d",&vize1);

	printf("2.vizenizi giriniz:");
	scanf("%d",&vize2);

	printf("Finalizi giriniz:");
	scanf("%d",&final);

	printf("Üniversite derecenizi giriniz:");
	scanf("%f",&ortalama);
	
	dersort = (vize1*3/10.0+ vize2*3/10.0+ final*4/10.0);
 
if (dersort >= 90) {
	printf ("Harf notunuz AA ve ders ortalamaniz %.2f",dersort);	
}

else if( dersort >=85 && dersort <90) {
	printf ("Harf notunuz BA ve ders ortalamaniz %.2f",dersort);
}

else if( dersort >=80 && dersort <85) {
	printf ("Harf notunuz BB ve ders ortalamaniz %.2f",dersort);
	}

else if( dersort >=75 && dersort <80) {
	printf ("Harf notunuz CB ve ders ortalamaniz %.2f",dersort);	
}

else if( dersort >=70 && dersort <75) {
	printf ("Harf notunuz CC ve ders ortalamaniz %.2f",dersort);
	
	if (ortalama < 2.5){
		printf("Dersi tekrar al.");
	}
	}
else if( dersort >=65 && dersort <70) {
	printf ("Harf notunuz DC ve ders ortalamaniz %.2f",dersort);
	
	if (ortalama < 2.5){
		printf("Dersi tekrar al.");
	}
	}

else if( dersort >=65 && dersort <70) {
	printf ("Harf notunuz DD ve ders ortalamaniz %.2f\n",dersort);
	
	if (ortalama < 2.5){
		printf("Dersi tekrar al.");
	}
	}

else {
	
	printf("Harf notun FF ortalamaniz %.2f",dersort);
	printf("Dersten kaldiniz.");
} 


return 0;
}
