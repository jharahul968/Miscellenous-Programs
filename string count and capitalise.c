#include <stdio.h>
void main()
{
	char sen[ 1000];
	int i, count=0;
	printf ("Enter a string. \n");
	gets(sen);
	while (sen[count]!='\0')
	{
		count ++;
		
	}
	printf ("The length of string is %d.\n",count);
	for (i=0; i<=count; i++)
	{
	  if (sen[i]>('Z'+1))	
	  {
	  	sen[i]-=32;
	  }
	  putch(sen[i]);
	}	
}
