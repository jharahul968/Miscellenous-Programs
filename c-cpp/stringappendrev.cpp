#include <stdio.h>
void append(char [],char []);
int main(){
char s1[60],s2[30];
printf("\nEnter the two strings below: \n")	;
gets(s1);
gets(s2);
append(s1,s2);
printf("\nThe final string is as : \n");
	printf("%s",s1);
return 0;
}
void append(char s1[],char s2[]){
	char rev[30];
	int len1,len2,i,j;
	for(len1=1;s1[len1]!='\0';len1++);
	for(len2=1;s2[len2]!='\0';len2++);
	j=len2;
	for(i=0;i<len2;i++){
	rev[i]=s2[j-1];
	j--;
	}
	j=0;
	for(i=len1;i<(len1+len2);i++){
		s1[i]=rev[j];
		j++;	
	}
}
