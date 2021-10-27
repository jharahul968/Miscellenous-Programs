#include <stdio.h>
#include <stdlib.h>
int main(){
	FILE *fp1,*fp2;
	int i,j;
	char ch;
	fp1=fopen("first.txt","w+");
	fprintf(fp1,"Hello world!\n");
	fclose(fp1);
	fp2=fopen("second.txt","w+");
	fprintf(fp2,"Hello planet!");
	fclose(fp2);
	fp1=fopen("first.txt","a+");
	fp2=fopen("second.txt","r+");
	while(1){
		ch=fgetc(fp2);
		if(ch==EOF)
		break;
		fputc(ch,fp1);
	}
		fclose(fp1);
			fclose(fp2);
}
