#include <stdio.h>
#include <math.h>

 int main()
 {
     float a,b,c,d,r1,r2;
	 int fla;

     printf("Enter the values of a,b and c:");
     scanf("%f%f%f",&a,&b,&c);
     d=(b*b)-(4*a*c);
printf("%f\n",d);
    fla=d>0?2:d<0?3:1;
     switch (fla)
     {
         case (1):
             r1=(-b)/(2*a);
         printf("the roots are real and equal and are equal to %f",r1);
         break;
         case (2):
            r1=(-b/(2*a))+sqrt(d)/(2*a);
            r2=-b/(2*a)-sqrt(d)/(2*a);
            printf("the roots are real and unequal and are equal to  %f and %f",r1,r2);
            break;
         default:
            r1=(-b)/(2*a);
            d*=-1;
            r2=(pow(d,0.5))/(2*a);
            printf("The roots are imaginary and unequal and are equal to %f+i%f and %f-i%f",r1,r2,r1,r2);
     }
return 0;
 }
