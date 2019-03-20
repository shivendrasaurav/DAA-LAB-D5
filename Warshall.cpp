#include<stdio.h>

int main(){
	int n,i,j,k;
	printf("Enter Size Of Matrix : ");
	scanf("%d",&n);
	int D[n][n];
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("\nEnter Cost At (%d,%d) : ",i,j);
			scanf("%d",&D[i][j]);
		}
	}
	printf("\nShortest Path Matrix Is : \n");
	for(k=0;k<n;k++){
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				D[i][j]=D[i][j]||D[i][k]&&D[k][j];
			}
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d",D[i][j]);
		}
		printf("\n");
	}

}
