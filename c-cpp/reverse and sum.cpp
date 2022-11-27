#include <stdio.h>
int main()
{
int a,b,num,sum,rev;
int rem=0;
printf("enter the number: \n");
scanf("%d",&num);
 a=num;
 rev=0;
 sum=0;
 while(a!=0){
 rem=a%10;
 sum+=rem;
 rev=rev*10+rem;
 a/=10;
 }
printf("\n the reverse is %d",rev);
printf("\n the sum is %d",sum);
return 0;}
