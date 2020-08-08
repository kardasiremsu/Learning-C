#include<stdio.h>

#define SIZE 6

int *bubblesort(int array[]){
	for(int i=0;i <SIZE; i++){
		for(int j=0; j<SIZE-i; j++){
			if(array[j]> array[j+1]){
				int temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;
			}
		}
	}
	return array;
}

int main(){
	
	printf("Siralanmasi istenilen dizi: ");
	int dizi[SIZE];
	for(int i=0; i<SIZE; i++){
		scanf("%d", &dizi[i]);}
	printf("\n\nSiralanacak dizi: ");
		for(int i=0; i<SIZE; i++){
			if(i !=0){
				printf(" | ");
			}
		printf("%d", dizi[i]);
	}	
	printf("\n\nSiralanmis dizi: ");
	int *siralanmis = bubblesort(dizi);
		for(int i=0; i<SIZE; i++){
			if(i !=0){
				printf(" | ");
			}
		printf("%d", siralanmis[i]);
	}
}
