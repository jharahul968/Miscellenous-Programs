#include <stdio.h>
int main()
{float i,j,sign=1;
float sum=0,result=0;
for(i=1;i<=500000;i++)
{
	result+=sign*(1/(2*i-1));
	sign*=-1;
}
sum=result*4;
printf("%f",sum);
	return 0;
}
