#include<stdio.h>
int maxbul(int *array,int uzunluk){

int maxdeger=array[0]; //array[0]
int i =1;
for(;i<uzunluk;i++){
	if(maxdeger<array[i]){
		maxdeger= array[i];
	}
}
return maxdeger;
}
int main(){
	int sayilar[5]={5,9,4,20,6};
	int max = maxbul(sayilar,5);	//int *p = sayilar; demek
	printf("Dizinin max degeri %d dir.",max);
	

	
	return 0;
}
