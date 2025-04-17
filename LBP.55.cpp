#include<stdio.h>
int main()
{
	int n,sum,r;
	printf("enter the value of n");
	scanf("%d",&n);
	sum=0;
	while(n>0)
	{
		r=n%10;
		sum=sum+r;
		n=n/10;
	}
	printf("sum=%d",sum);
	return 1;
}

