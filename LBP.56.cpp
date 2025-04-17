#include<stdio.h>
int main()
{
	int  n,large=0,r=0;
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		if(r>large)
		{
			large=r;
		}
		n=n/10;
	}
	printf("largest digit of number=%d",large);
	return 1;
}
