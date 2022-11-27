#include <stdio.h>
int main(){
	int a[3][3];
	int i,j,largest;
	largest=**a;
	printf("\nEnter the elements for matrix of size 3*3: ");
	for (i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
			printf("\na[%d][%d]: ",i+1,j+1);
			scanf("%d",(*(a+i)+j));
		}
	}
	for (i=0;i<3;i++){
		for (j=0;j<3;j++){
		if(largest<*(*(a+i)+j))
		largest=*(*(a+i)+j);
	}}
		printf("\nThe largest element: %d\n",largest);
			for (i=0;i<3;i++){
		for (j=0;j<3;j++){
			if(i==j){
				*(*(a+i)+j)=largest;
			}}}
			printf("\nThe final matrix is: \n");
				for (i=0;i<3;i++){
		for (j=0;j<3;j++){
			printf("%d\t",*(*(a+i)+j));
		}
		printf("\n");
	}
		return 0;
}
