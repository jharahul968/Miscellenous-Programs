#include <stdio.h>
#include <string.h>
#include <conio.h>
int main()
{
	int i,j,k;
	char str[]="Pulchowk";
	int m=strlen(str);
	for(i=0;i<m;i++){
		for(k=m;k>i+1;k--)
		printf(" ");
		for(j=m-i-1;j<=m-1;j++)
		putch(str[j]);
		printf("\n");
	}
	return 0;
}
