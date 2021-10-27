
#include <stdio.h>
int nature(int n, int x)
{
	
	if (x<=n)
	{
		printf("%d\n",x);
	nature(n,x+1);
	}

	
	
	
}
int main ()
{
int n,x;
printf("Welcome here. Please:\n");
	printf("Enter starting number:\n");
	scanf("%d",&x);
	if (x<=0)
	printf("Please enter only natural numbers. that is only after zero.");
	printf("Enter ending number:\n");
	scanf("%d",&n);
	printf("\n");
	printf("\nThe natural number list goes like this:\n");
	nature(n,x);
	printf("\nIts the end now.\nThank you for using the program.");
	return 0;
}
