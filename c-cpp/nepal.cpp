#include <stdio.h>
#include <conio.h>
int main(){
	char ch[]= {'N','e','p','a','L'};
	int i,j,k;
	for(i=1;i<=5;i++){
		for(j=1;j<=(5-i);j++)
			putch(' ');
			for(k=1;k<=(2*i-1);k++)
				putch(ch[i-1]);
			putch('\n');
	}
	return 0;
}
