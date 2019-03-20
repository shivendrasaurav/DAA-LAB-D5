#include<stdio.h>
int main(){
	int n,i,j;
	printf("Enter Size Of Matrix : ");
	scanf("%d",&n);
	int D[n][n];
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("\nEnter Cost At (%d,%d) : ",i,j);
			scanf("%d",&D[i][j]);
		}
	}
}
