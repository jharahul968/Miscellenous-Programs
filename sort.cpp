#include <stdio.h>
int main(){
	int a[10]={5,7,2,6,9,4,8,1,10,3};
	int i,j,swap;
	for (i=0;i<10;i++){
		for (j=i;j<10;j++){
			if(a[i]>a[j]){
			
			swap=a[i];
			a[i]=a[j];
			a[j]=swap;
		}}
	}
	for (i=0;i<10;i++)
	printf("%d\t",a[i]);
	return 0;
}
