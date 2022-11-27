#include <stdio.h>
#include <math.h>
int fact(int);
int main(){
	float result=0;
	float x;
	int n;
	int i=0,j;
	int sign=1;
	printf("\nenter x in degrees: ");
	scanf("%f",&x);
printf("\nenter n: ");
	scanf("%d",&n);
	x=x*(3.142/180);
	for(j=1;j<=n;j++){
		result+=sign*(pow(x,i)/fact(i));
		sign*=-1;
		i+=2;
	}
	printf("\nthe cosine series evaluated upto %d terms for %f radians is %f.\n",n,x,result);
	return 0;
}
int fact(int i){
	if (i==0)
	return (1);
	else
	return (i*fact(i-1));
}
