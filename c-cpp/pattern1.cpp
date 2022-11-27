#include <stdio.h>
int main()
{
	int i,j,k,l,m,n,o;
	for(i=0;i<5;i++){
		for(j=0;j<5-i;j++)
		printf(" ");
		for(k=1;k<=i+1;k++)
		printf("* ");
		printf("\n");
	}
	for(m=4;m>=1;m--){
		for(o=4;o>=m;o--)
		printf(" ");
		for(n=1;n<=m;n++)
		printf(" *");
		printf("\n");
	}
}
