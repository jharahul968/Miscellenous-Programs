#include <stdio.h>
void main()
{
	float x,y;
	printf ("Enter the value of x.\n");
	scanf ("%f",&x);
	y=x<20?1*x+2:x>20?(5*x-1):500;
	printf("y=%f",y);
}
