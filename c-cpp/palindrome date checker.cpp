#include <stdio.h>
void cp(int a)
{
	int b,c,d=0,e;
	b=a;
	while (b!=0)
	{
		c=b%10;
		d=d*10+c;
		b/=10;
	}
	if (d==a)
	printf("this date is palindrome");
	else
	printf("this date isn't palindrome");
}
int main()
{
	int a;
	int i;
	int n;
	printf("How many numbers you want to check?\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	printf("\nenter the date interms of YYYYMMDD:   ");
	scanf("%d",&a);
	cp(a);
	printf("\n");
}
}
