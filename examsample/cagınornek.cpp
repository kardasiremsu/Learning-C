#include<stdio.h>

int main() {
	
	int i=1;
	int j;
	
	while (i <=10) {
		printf("i= %d\n",i);
		j = i +1;
		while (j <=10)
		{
			printf("j= %d\n",j);
			j= j+1;
		}
		i = i+1;
	}
	return 0;
}
