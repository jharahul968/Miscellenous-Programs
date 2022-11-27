#include <stdio.h>
#include <math.h>
int fact(int);
int main(){
	float result=0;
	int x,n;
	int i;
	int sign=1;
	printf("\nenter x in degrees: ");
	scanf("%d",&x);
printf("\nenter n: ");
	scanf("%d",&n);
	x=x*(180/(22/7));
	for (i=1;i<=n;2*(i-1)){
		result+=(sign*pow(x,i))/fact(i);
		sign*=1;
	}
	printf("\nthe cosine series evaluated upto %d terms for %d radians is %d.\n",n,x,result);
	return 0;
}
int fact(int i){
	if (i==0)
	return (0);
	else
	return (i*fact(i-1));
}
