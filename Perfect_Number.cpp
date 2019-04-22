#include<stdio.h>
int main(){
	int i=0,n,sum=0;
	printf("Enter A Number : ");
	scanf("%d",&n);
	while(i<n-1){
		i++;
		if(n%i==0)
		{			
			sum=sum+i;
		}
	}
	if(sum==n)
		printf("\nThe Number You Entered Is A Perfect Number");
	else
		printf("\nThe Number You Entered Is Not A Perfect Number");
	return 0;
}
