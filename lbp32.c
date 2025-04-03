#include<stdio.h>
#include<string.h>
int main()
{
   char str1[50],str2[50];
   printf("enter string 1");
   scanf("%s",str1);
   printf("enter string 2");
   scanf("%s",str2);
   strcat(str1,str2);
   printf("concatinate string=%s\n",str1);
   return 1;	
}
