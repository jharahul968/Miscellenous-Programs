#include <stdio.h>
int fibo(int n)
{
	if (n==0)
	return 0;
	else if (n==1)
	return 1;
	else
	return (fibo(n-1)+fibo(n-2));
}

int main(){
	int i,n;
	printf("\nPlease enter the desired number till which the FIBOs are required: \n");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		printf("%d\t",fibo(i));
	}
	return 0;
}
