#include <stdio.h>
int main(){
	int m,n,a[20][20],i,j,b[20];
	printf("\nenter the row and columns you require: ");
	scanf("%d%d",&m,&n);
	printf("\nenter data: ");
	for(i=1;i<=m;i++){
		for(j=1;j<=n;j++){
			printf("\na[%d][%d]= ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=1;i<=m;i++)
	b[i]=0;
	
	
	for(i=1;i<=m;i++){
		for(j=1;j<=n;j++){
	if(b[i]<a[i][j])
		b[i]=a[i][j];
	else
	continue;
	}}
		printf("\n");
		printf("\n");
	for(i=1;i<=m;i++)
	printf("\n%d",b[i]);
	return 0;
}
