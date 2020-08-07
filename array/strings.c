#include<stdio.h>
#include<string.h> //strlen(isim)
int uzunlukbul(char name[]){
	int uzunluk=0;
	int i;
	
	for(i=0;name[i] !='\0';i++){
		uzunluk++;
	}
	return uzunluk;
}
int main(){
char isim[]="Iremsu";
/* karakter dizilerinde 
'I'
'r'
'e'
'm'
's'
'u'
'\0'
olarak atýyor bilgisayar kendi */
printf("%d",uzunlukbul(isim));
return 0;
}
