#include<stdio.h>

int main() {
	int note;
	printf("Notunuzu girin:");
	scanf("%d",&note);
	
	if (note>60) {
		printf("Gectiniz");
		
	}
	else if (note =60){
		printf("Sinirdasiniz.");
	}
	else {
		printf("Dersten kaldiniz.");
	}
	
	
	return 0;
}
