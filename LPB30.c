#include<stdio.h>
int main()
{
	int n,r;
	printf("n value");
	scanf("%d",&n);
	r=fib(n);
	printf("%d",r);
}
intfib(int n)
{

 if(n==0||n==1)
 return 1;
 else;
 return fib(n-1)+fib(n-2);	
}
int fib(int n)
{
if(n==0||n==1)
 return 1;
 else;
 return fib(n-1)+fib(n-2);	
}
	
                                        

