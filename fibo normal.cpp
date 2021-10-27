#include <stdio.h>
#include <conio.h>
int main()
{
	int i,next_term,t1=0,t2=1,n;
	printf("Please enter the number till which the fibo series is desired: \n");
	scanf("%d",&n);
	printf("\n%d\t",t1);
	for(i=1;i<n;i++){
	printf("\t%d\t",t2);
	next_term=t1+t2;
	getch();
	t1=t2;
	t2=next_term;
	}
	return 0;
}
