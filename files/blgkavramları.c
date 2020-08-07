#include<stdio.h>

int main(){
	
	FILE *outfile, *infile;
	int b = 5, f;
	float a = 13.72, c= 6.68,e,g;
	
	outfile = fopen("textdata.txt","w");
	fprintf(outfile,"%f %d %f\n",a,b,c); //dosyanýn içine yazar
	fclose(outfile);
	
	infile = fopen("textdata.txt","r");
	fscanf(infile,"%f %d %f",&e,&f,&g);
	printf("%f %d %f\n",a,b,c);
	printf("%f %d %f",e,f,g);
	fclose(infile);
	
	char ch;
	FILE *fp;
	fp = fopen("textdata.txt","r");
	while(!feof(fp)){ //file end of file olmadýðý sürece
		ch = getc(fp); //karakter oku 
		printf("\n%c",ch); //ekrana bak
	}
	return 0;
}
