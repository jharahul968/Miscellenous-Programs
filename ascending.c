#include <stdio.h>
//ascending order
void main()
{
	int n[5],i,j,temp;
	for (i=0;i<5; i++)
	{
		printf ("Enter element no %d",i);
		scanf ("%d",&n[i]);
		
	}
	for (i=0; i<5; i++)
	{
		for (j=i; j<5; j++)
		{
			if (n[i]>n[j])
			{
				temp= n[i];
				n[i]=n[j];
				n[j]=temp;
				
			}
		}
	}
	for (i=0; i<5; i++)
	{
		printf ("%d, ",n[i]);
	}
}
