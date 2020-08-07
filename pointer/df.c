#include<stdio.h>
int my_strlen(char *ptr_str){
		int i=0;
		while(ptr_str[i] != '\0'){

			i++;
			
		}
		return i;
	}
int my_strlen2(char *ptr_strx){
		int i=0;
		while( *(ptr_strx+i)!= '\0'){
			i++;
			
		}
		return i;
	}	
	
int main()
{
	char *ptr_str1;
    ptr_str1="string length";

    printf("numbers of string=%d\n",my_strlen(ptr_str1));
    printf("numbers of string=%d",my_strlen2(ptr_str1));
    getchar();	
	
	return 0;
}
