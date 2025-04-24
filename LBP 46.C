#include<stdio.h>
int main()
{
	int a,b,i,j,count;
	printf("enter a,b,value:");
	scanf("%d%d",&a,&b);
	for(i=a;i<=b;i++)
	{
		count=0;
		for(j=2;j<=i/2;j++)
		{
			if(i%j==0)
			{
				count++;
				break;
			}
		}
		if(count==0&&i!=1)
		printf("%d",i);
		}
}
