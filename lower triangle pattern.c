#include <stdio.h>
#include <conio.h>
int main(){
	int i,j;
	for(i=0; i<5; i++){
		for(j=0; j<i; j++)
		printf(" ");
		for(j=1; j<=5-i;j++)
		printf("%d",j);
				for(j=4-i; j>=1; j--)
		printf("%d",j);
		printf("\n");
	}
	return 0;
}
