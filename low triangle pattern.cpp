#include <stdio.h>
int main()
{
	int i,j,k,l=1;
	for(i=1;i<=5;i++)
	{
		for(k=1;k<=i;k++)
		{
		   printf ("%d\t",l)
		   ;
		   l++;
		}
		printf("\n");
	}
	return 0;
}
