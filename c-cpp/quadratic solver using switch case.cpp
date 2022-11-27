#include <stdio.h>
#include <math.h>
int main()
{
	float a,b,c,r1,r2,r,det;
	int s;
	printf("enter a b c : \n");
	scanf("%f %f %f",&a,&b,&c);
	det=(b*b)-(4*a*c);
	printf("The determinant of this equation is equal to : %f\n",det);
	s=det>0?1:det<0?-1:0;
	switch (s){
		case (1):
			r1=(-b+pow(det,0.5))/(2*a);
			r2=(-b-pow(det,0.5))/(2*a);
			printf("roots are\n x= %f and x= %f",r1,r2);
			break;
			case(0):
				r=(-b)/(2*a);
				printf("root is\n x= %f",r);
				break;
				default:
					r=(-b)/(2*a);
					r1=pow(det*-1,0.5)/(2*a);
			      	r2=pow(det*-1,0.5)/(2*a);
			      	printf("Roots are\n x= %f+i%f and x= %f-i%f",r,r1,r,r2);
			      	break;

	}
	return 0;
}

