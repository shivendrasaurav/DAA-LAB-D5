#include<stdio.h>
int main(){
	int i=0,n,sum=0;
	scanf("%d",&n);
	while(i<n){
		if(n%i==0)
			sum=sum+i;
	}
}
