#include<stdio.h>

#define SIZE 6

int *selectionsort(int arr[]){
	int i,j;
	int min;
	
	for(i=0; i <SIZE; i++){
		min =i;
		for(j=i+1; j<SIZE; j++){
			if(arr[j] < arr[min]){
				min = j;
			}
		}
		
		int temp = arr[i];
		arr[i] = arr [min];
		arr[min] = temp;
	}	
	
	return arr;
	
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
	int *siralanmis = selectionsort(dizi);
		for(int i=0; i<SIZE; i++){
			if(i !=0){
				printf(" | ");
			}
		printf("%d", siralanmis[i]);
	}
}
