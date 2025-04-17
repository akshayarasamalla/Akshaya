#include<stdio.h>
int main()
{
	int n,r,sum=0,n1,n2,i;
	scanf("%d%d",&n1,&n2);
	sum==0;
	for(i=n1;i<=n2;i++)
	{
	n=i;
	while(n>0)
	{
		r=n%10;
		sum=sum+r;
		n=n/10;
	}
	}
	printf("sum=%d",sum);
	return 1;
}
