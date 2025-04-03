#include<stdio.h>
#include<string.h>
int main()
{
	char str[50];
	int count=0,i;
	printf("enter a string;");
	scanf("%s",str);
	for(int i=0; str[i]!='\0';i++)
	{
		char ch=str[i];
		if(ch=='a'||ch=='e'||ch=='i'||ch=='0'||ch=='u')
		{
			count++;
		}
	}
	printf("number of vowels=%d",count);
	return 0;
}
