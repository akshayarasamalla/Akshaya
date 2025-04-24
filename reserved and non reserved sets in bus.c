#include<stdio.h>
int main()
{
	int bus[10][4];
	int i,j,c=1,s,r=0;
	char ch;
	for(i=0;i<10;i++)
	{
		for(j=0;j<4;j++)
		{
		    bus[i][j]=c;
			c++;
			printf("%d\t",bus[i][j]);
		}
		printf("\n");
		
	}

do
{
	printf("enter seat num reservation:");
	scanf("%d",&s);
	for(i=0;i<10;i++)
	{
		for(j=0;j<4;j++)
		{
			if(bus[i][j]==s){
			bus[i][j]=0;
			r++;
		}
		    printf("%d\t",bus[i][j]);
		}
		printf("\n");
	}
	printf("continue press: ");
	fflush(stdin);
	ch=getchar();
}while(ch=='y');
printf("\nreserved seats%d",r);
printf("\n non reserved seats%d",40-r);
return 1;
}

