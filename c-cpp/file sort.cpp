#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
struct employee{
	char name[50];
	char position[20];
	int salary;
};
int main(){
	struct employee e[100],temp;
	int i,j,n;
	FILE *fp1,*fp2;
	fp1=fopen("text.txt","w+");
	if (fp1==NULL){
		fprintf(stderr,"Sorry, there's an error!");
		exit(1);
	}
	printf("The number of employees?\n ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		printf("Enter name of employee %d: ",i);	
		    gets(e[i].name);
		printf("Enter salary of employee %d: ",i);
		scanf("%d",&e[i].salary);
		printf("Enter position of employee %d: ",i);
		gets(e[i].position);
		
	}
	for(i=1;i<=n;i++){
		fprintf(fp1,"%s\n%s\n%d\n",e[i].name,e[i].position,e[i].salary);
	}
	fclose(fp1);
	fp1=fopen("text.txt","r+");
	fp2=fopen("binary.txt","w+");
	if (fp2==NULL){
		fprintf(stderr,"Sorry, there's an error!");
		exit(2);
	}
	for(i=1;i<=n;i++)
	{
	for(j=1;j<=n;j++){
		if(e[i].salary>e[j].salary)
		{
			temp=e[i];
			e[i]=e[j];
			e[j]=temp;
		}
	}}
	for(i=1;i<=n;i++){
		fprintf(fp2,"\nFor employee %d: \n",i);
		fprintf(fp2,"Name: %s\nPosition: %s\nSalary: %d\n",e[i].name,e[i].position,e[i].salary);
	}
	fclose(fp2);
	fclose(fp1);	
	
	return 0;
}

